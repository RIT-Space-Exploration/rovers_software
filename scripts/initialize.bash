#sudo apt update -y
#sudo apt dist-upgrade -y

#sudo apt install ros-galactic-navigation2 ros-galactic-nav2-bringup '~ros-galactic-turtlebot3-.*' -y
#sudo apt install ros-galactic-joint-state-publisher-gui -y
#sudo apt install ros-galactic-xacro -y
#sudo apt install rviz -y

echo 'export RMW_IMPLEMENTATION=rmw_fastrtps_cpp' >> ~/.bashrc
echo 'export LC_NUMERIC="en_US.UTF-8"' >> ~/.bashrc

git push origin -b dev_galactic
git fetch origin -b dev_galactic
git rebase origin/dev_galactic
#git checkout -b dev_galactic origin/galactic || git checkout origin/galactic

sudo apt install python3-colcon-mixin -y
colcon mixin add default https://raw.githubusercontent.com/colcon/colcon-mixin-repository/master/index.yaml
colcon mixin update default



rosdep update
rosdep install --from-paths . --ignore-src -r --rosdistro galactic -y
vcs import src < spex_rover.repos


colcon build --symlink-install
echo 'source /workspaces/spex_rover/install/setup.bash' >> ~/.bashrc
