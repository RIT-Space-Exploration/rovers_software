sudo apt update

export RMW_IMPLEMENT ATION=rmw_fastrtps_cpp

git fetch origin galactic
git checkout --track -b dev_galactic || git checkout --track dev_galactic

rosdep update
rosdep install --from-paths src --ignore-src -r -y
vcs import src < spex_rover.repos

colcon build --symlink-install
. ./install/local_setup.bash