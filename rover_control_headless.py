import pygame
import os
import RPi.GPIO as GPIO
from time import sleep

os.environ['SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS'] = '1'
#os.environ['SDL_VIDEODRIVER'] = 'dummy'

pygame.init()
screen = pygame.display.set_mode((400, 600))
pygame.event.set_grab(True)

ledpin_left = (12, 18)
ledpin_right = (13, 19)				# PWM pin connected to LED
GPIO.setwarnings(False)			#disable warnings
GPIO.setmode(GPIO.BOARD)		#set pin numbering system

GPIO.setup(ledpin_left[0], GPIO.OUT)
GPIO.setup(ledpin_left[1], GPIO.OUT)
GPIO.setup(ledpin_right[0], GPIO.OUT)
GPIO.setup(ledpin_right[1], GPIO.OUT)
PWM_OFF = 28

pwm_left_rear = GPIO.PWM(ledpin_left[0], 200)		#create PWM instance with frequency
pwm_left_front = GPIO.PWM(ledpin_left[1], 200)		#create PWM instance with frequency
pwm_right_rear = GPIO.PWM(ledpin_right[0], 200)
pwm_right_front = GPIO.PWM(ledpin_right[1], 200)

pwm_left_rear.start(PWM_OFF)				#start PWM of required Duty Cycle 
pwm_left_front.start(PWM_OFF)
pwm_right_rear.start(PWM_OFF)
pwm_right_front.start(PWM_OFF)

not_connected = True

# initial connection
while not_connected:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
        if event.type == pygame.JOYDEVICEADDED:
            not_connected = False
            print('connected!')
            
joystick = pygame.joystick.Joystick(0)
joystick.init()
            
joystick_enabled = True
while True:
    # process events
    allow_continue = False 
    while not allow_continue:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
            if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                pygame.quit()
            # handle joy device removed, if controller removed or sleeps during operation
            if event.type == pygame.JOYDEVICEREMOVED:
                print("Joystick removed")
                joystick_enabled = False
            if event.type == pygame.JOYDEVICEADDED:
                print("Joystick added")
                joystick = pygame.joystick.Joystick(0)
                joystick.init()
                joystick_enabled = True
            # control lockout
            if joystick_enabled == False:
                allow_continue = False
            else:
                allow_continue = True
            
    # print analog axes
    y_offset = 50
    screen.fill((0, 0, 0))
    for axis in range(joystick.get_numaxes()):
        axis_val = joystick.get_axis(axis)
        y_offset += 30

    # forward and backward
    left_axis = -1 * joystick.get_axis(1)
    right_axis = 1 * joystick.get_axis(3)

    left_axis = 0.001 if abs(left_axis) < 0.1 else left_axis
    right_axis = 0.001 if abs(right_axis) < 0.1 else right_axis

    left_duty_cycle = int(left_axis/abs(left_axis) * left_axis**2 * 10 + 28)
    right_duty_cycle = int(right_axis/abs(right_axis) * right_axis**2 * 10 + 28)

    # button 5 should be right bumper
    # should only move if rb is pressed
    if joystick.get_button(7):
        pwm_left_rear.ChangeDutyCycle(left_duty_cycle)
        pwm_left_front.ChangeDutyCycle(left_duty_cycle)
        pwm_right_front.ChangeDutyCycle(right_duty_cycle)
        pwm_right_rear.ChangeDutyCycle(right_duty_cycle)
    else:
        pwm_left_rear.ChangeDutyCycle(PWM_OFF)
        pwm_left_front.ChangeDutyCycle(PWM_OFF)
        pwm_right_front.ChangeDutyCycle(PWM_OFF)
        pwm_right_rear.ChangeDutyCycle(PWM_OFF)
    
    pygame.display.update()
    sleep(0.05)
