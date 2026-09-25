# 2027-navigation-exam
# 2027 导航组考核

## 基本说明

本仓库用于提交 2027 导航组招新考核内容。

## exam1：C++ 基础考核

完成了 C++ 基础相关题目，主要涉及：

- 结构体的定义与使用
- 结构体数组
- 指针与结构体指针
- 函数参数传递
- 类与对象
- 构造函数与析构函数

相关代码存放在 `exam1` 文件夹中。

## exam2：ROS2 基础考核

实验环境：

- Ubuntu 24.04 LTS
- ROS 2 Jazzy
- VirtualBox

完成过程：

1. 安装并配置 ROS 2 Jazzy
2. 创建 ROS2 工作空间
3. 将考核提供的源码放入 workspace/src
4. 使用 colcon 进行编译
5. 加载工作空间环境
6. 使用 ros2 run 运行节点
7. 程序成功输出考核要求内容

使用的主要命令包括：

```bash
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.bash
ros2 run daohang daohang.cpp
