FROM althack/ros2:galactic-gazebo

# Set up auto-source of workspace for ros user
ARG WORKSPACE
RUN echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/install/setup.bash; fi" >> opt/ros/.bashrc

RUN export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

RUN sudo apt update
RUN sudo apt install ros-galactic-navigation2 ros-galactic-nav2-bringup '~ros-galactic-turtlebot3-.*'
RUN rosdep update

RUN vcs import src < spex_rover.repos
RUN rosdep install --from-paths src --ignore-src -r -y
RUN colcon build --symlink-install
RUN . ./install/local_setup.bash