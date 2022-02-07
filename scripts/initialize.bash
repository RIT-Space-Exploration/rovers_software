git fetch -j4 origin galactic
git checkout --track -b dev_galactic

rosdep update
rosdep install --from-paths src --ignore-src -r -y
vcs import src < spex_rover.repos

colcon build --symlink-install
. ./install/local_setup.bash