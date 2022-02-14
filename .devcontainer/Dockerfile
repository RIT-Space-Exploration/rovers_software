FROM althack/ros2:galactic-gazebo

# Set up auto-source of workspace for ros user
RUN git config --global user.name "Sean Clifford"
RUN git config --global user.email "seancliff01@gmail.com"

ARG WORKSPACE
RUN echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/install/setup.bash; fi" >> opt/ros/.bashrc

RUN sudo apt update -y
RUN sudo apt dist-upgrade -y

RUN sudo apt install ros-galactic-navigation2 ros-galactic-nav2-bringup '~ros-galactic-turtlebot3-.*' -y
RUN sudo apt install ros-galactic-joint-state-publisher-gui -y
RUN sudo apt install ros-galactic-xacro -y
RUN sudo apt install rviz -y
#RUN sudo apt update

# RUN sudo apt -y install ros-galactic-navigation2 ros-galactic-nav2-bringup '~ros-galactic-turtlebot3-.*'
