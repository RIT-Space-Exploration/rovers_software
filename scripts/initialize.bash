sudo apt update
sudo apt dist-upgrade

export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

git fetch origin galactic
git checkout -b dev_galactic origin/galactic || git checkout origin/galactic

sudo apt install python3-colcon-mixin
colcon mixin add default https://raw.githubusercontent.com/colcon/colcon-mixin-repository/master/index.yaml
colcon mixin update default

rosdep update
rosdep install --from-paths . --ignore-src -r --rosdistro galactic -y
vcs import src < spex_rover.repos


colcon build --symlink-install
source ./install/setup.bash
echo 'source ~/spex_rover/install/setup.bash' >> ~/.bashrc