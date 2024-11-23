1.源码编译UE5,新建一个C++工程，进行简单场景编辑和工程设置
2.编译并构建安装包，确保能够用来将游戏工程安装到手机正常运行


未能实现安卓平台的打包，报错及解决流程如下：
1.下载最新Android Studio，提示未安装Android Studio（solved）
2.下载setupandroid.bat指定版本的Android Studio，下载到默认路径，在UE中下载SDK命令框闪退（solved）
3.在SDKmanager中手动下载setupandroid.bat指定版本的JDK、SDK和NDK，并且正确配置好项目设置，提示未下载SDK（solved）
4.再次启动UE，从UE打包界面下载SDK，setupandroid.bat不再闪退，提示xml文件解析错误（unsolved）
正在查找出现错误的xml文件，未找到AndroiManifest.xml文件，日志中也未找到xml文件的报错，日志提示缺少三个.dll文件，不能确定日志中的.dll文件缺失和程序报错无法解析.xml是同一种错误。

Windows平台可以正常打包。
