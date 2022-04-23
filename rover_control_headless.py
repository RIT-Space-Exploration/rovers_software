import pygame
import os
import board
import busio
from adafruit_servokit import ServoKit
# import RPi.GPIO as GPIO
from time import sleep

os.environ['SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS'] = '1'
os.environ['SDL_VIDEODRIVER'] = 'dummy'

pygame.init()
screen = pygame.display.set_mode((400, 600))
pygame.event.set_grab(True)

i2c = busio.I2C(board.SCL, board.SDA)

kit = ServoKit(channels=16)

frontRight = kit.continuous_servo[0]
backRight = kit.continuous_servo[1]
frontLeft = kit.continuous_servo[2]
backLeft = kit.continuous_servo[3]

frontRight.set_pulse_width_range(1000, 2000)
backRight.set_pulse_width_range(1000, 2000)
frontLeft.set_pulse_width_range(1000, 2000)
backLeft.set_pulse_width_range(1000, 2000)


not_connected = True

SLOPE = 8

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
left_axis_target, right_axis_targis = 0, 0
left_axis, right_axis = 0, 0
while True:
    # refresh event loop
    events = pygame.event.get()

    # forward and backward
    left_axis_target = -1 * joystick.get_axis(1)
    right_axis_target = 1 * joystick.get_axis(3)

    # scale forward and backward motion
    left_axis += ((left_axis_target - left_axis) / SLOPE)
    right_axis += ((right_axis_target - right_axis) / SLOPE)

    print(f"L: {left_axis} R: {right_axis}")

    # button 5 should be right bumper
    # should only move if rb is pressed
    if joystick.get_button(7):
        frontRight.throttle = right_axis
        backRight.throttle = right_axis
        frontLeft.throttle = left_axis
        backLeft.throttle = left_axis
    else:
        frontRight.throttle = 0
        backRight.throttle = 0
        frontLeft.throttle = 0
        backLeft.throttle = 0    
    pygame.display.update()
    sleep(0.05)
