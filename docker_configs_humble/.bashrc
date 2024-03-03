# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# don't put duplicate lines in the history. See bash(1) for more options
# ... or force ignoredups and ignorespace
HISTCONTROL=ignoredups:ignorespace

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "$debian_chroot" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
	# We have color support; assume it's compliant with Ecma-48
	# (ISO/IEC-6429). (Lack of such support is extremely rare, and such
	# a case would tend to support setf rather than setaf.)
	color_prompt=yes
    else
	color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# some more ls aliases
alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if [ -f /etc/bash_completion ] && ! shopt -oq posix; then
    . /etc/bash_completion
fi


alias python=python3
export ROS_DOMAIN_ID=31

export ROBOT_TYPE=r2            # r2, x1, x3
export RPLIDAR_TYPE=a1          # a1, s2, 4ROS
export CAMERA_TYPE=astraplus    # astrapro, astraplus

alias python=python3
ip=$(ip addr show eth0 | grep -o 'inet [0-9]\+\.[0-9]\+\.[0-9]\+\.[0-9]\+' | grep -o [0-9].*)
if [ -z $ip ]; then
ip=$(ip addr show wlan0 | grep -o 'inet [0-9]\+\.[0-9]\+\.[0-9]\+\.[0-9]\+' | grep -o [0-9].*)
fi
if [ -z $ip ]; then
ip=$(ip addr show wlp59s0 | grep -o 'inet [0-9]\+\.[0-9]\+\.[0-9]\+\.[0-9]\+' | grep -o [0-9].*)
fi
echo "-----------------------"
echo -e "MY_IP: \033[32m$ip\033[0m"
echo "-----------------------"

xhost +si:localuser:root

# Docker aliases
alias d="docker"
alias di="docker images"
alias dps="docker ps"
alias dpsa="docker ps -a"
alias dstop="docker stop"
alias drm="docker rm"
alias drmi="docker rmi"
alias dlogs="docker logs"
alias dexec="docker exec -it"
alias dvol="docker volume ls"
alias dnet="docker network ls"


# Docker Compose aliases
alias dc="docker-compose"
alias dcup="docker-compose up"
alias dcdown="docker-compose down"
alias dcps="docker-compose ps"
alias dcb="docker-compose build"

# Function to run a command in a new Docker container
drun() {
    docker run -it --rm "$@"
}
# Function to enter a running Docker container
dcommit() {
    docker commit hiru_test tthisusertaken/nvidiacuda-12.3.1-devel-ubuntu22.04:$1
}

# Function to enter a running Docker container
denter() {
    docker exec -it hum_test /bin/bash
}

# Set the ROS workspace
export ROS_WS=~/ros2_ws

# Function to easily change to ROS workspace
roscd() {
    cd $ROS_WS/$1
}

# Alias for ROS commands
alias rosc="roscore"
alias cbs="colcon build && source install/setup.bash"
alias cbss="colcon build --symlink-install && source install/setup.bash"
alias sws="source install/setup.bash"
alias cb="colcon build"
alias pkgc="ros2 pkg create --build-type ament_python"

cbi(){
   cb
   source install/setup.sh
}
# ROS 2 Shortcuts
alias r2cb='ros2 run controller_manager controller_manager'
alias r2l='ros2 launch'
alias r2r='ros2 run'
alias r2nl='ros2 node list'
alias r2ns='ros2 node show'
alias r2pb='ros2 param get'
alias r2ps='ros2 param set'
alias r2th='ros2 topic hz'
alias r2tl='ros2 topic list'
alias r2ts='ros2 topic show'
alias r2te='ros2 topic echo'
alias r2sr='ros2 service call'
alias r2sw='ros2 service list'

# Alias for common ROS 2 tools
alias rv2="ros2 run rviz2 rviz2"
alias bag2="ros2 bag"
alias doc2="ros2 doctor"

# Git aliases (if using Git for your packages)
alias gs="git status"
alias gc="git commit -m"
alias gp="git pull"
alias gpush="git push"

# Catkin tools (if you use catkin build)
alias cbuild="catkin build"
alias cdevel="source $ROS_WS/devel/setup.bash"


#colcon_cd
#source /usr/share/colcon_cd/function/colcon_cd.sh
#export _colcon_cd_root=/root/yahboomcar_ros2_ws/yahboomcar_ws
#source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash

#ros2
#source /opt/ros/foxy/setup.bash
#source /root/yahboomcar_ros2_ws/yahboomcar_ws/install/setup.bash
#source /root/yahboomcar_ros2_ws/software/library_ws/install/setup.bash

# orbslam2
#export ORB_SLAM2_ROOT_DIR=/root/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master
#export LD_LIBRARY_PATH=/root/yahboomcar_ros2_ws/software/orbslam2/Pangolin-0.6/build/src/:/root/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/Thirdparty/DBoW2/lib:/root/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/Thirdparty/g2o/lib:/root/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/lib:$LD_LIBRARY_PATH
#export PS1='\[\033[1;36m\]\h \[\033[1;34m\]\W\[\033[0;35m\] \[\033[1;36m\]# \[\033[0m\]'
PS1='\[\033[01;36m\]\u@test_docker_hum\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
#source ~/ros2_wws/install/setup.bash
#source ~/frc_ws/install/setup.bash
function crw() {
    rm -rf build install log
}
export TURTLEBOT3_MODEL=waffle
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
#source ~/surround_view_ros/install/setup.bash
#source ~/ros2_con/install/setup.bash
#source ~/theconstrctsim/R2basic_concepts/install/setup.bash
#source ~/ros2_tools/install/setup.bash
#source ~/ros2_sim/install/setup.bash
#source /root/ros2_code/humble/learning/install/setup.bash

source /opt/ros/humble/setup.bash
source /root/dai_ws/install/setup.sh
source /root/cyglidar_ws/install/setup.sh
#export GAZEBO_PLUGIN_PATH=~/<path>/my_package_example/lib:${GAZEBO_PLUGIN_PATH}
#export GAZEBO_MODEL_PATH=~/root/surround_view_ros/gazebo_models:${GAZEBO_MODEL_PATH}
#export GAZEBO_RESOURCE_PATH=~/<path>/my_package_example/models:${GAZEBO_RESOURCE_PATH}

eval "$(register-python-argcomplete3 ros2)"
eval "$(register-python-argcomplete3 colcon)"
