sudo apt get update

export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

git fetch origin galactic
git checkout --track -b dev_galactic

rosdep update
rosdep install --from-paths src --ignore-src -r -y
vcs import src < spex_rover.repos

colcon build --symlink-install
. ./install/local_setup.bash