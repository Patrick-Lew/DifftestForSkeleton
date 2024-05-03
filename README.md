
## CHIPLAB
chiplab项目致力于构建基于LoongArch32 Reduced的soc敏捷开发平台。
本项目总体框架引用了[CHIPLAB](https://portrait.gitee.com/loongson-edu/chiplab）项目，对其进行了针对Skeleton CPU的适配和修改。
详细介绍请参考[CHIPLAB使用介绍](https://chiplab.readthedocs.io/)

## 
```
安装顺序
1. sudo apt install verilator gtkwave
2. export CHIPLAB_HOME="这个目录"
3. 配置交叉编译工具链
    安装交叉编译工具链到toolchain中，确保环境变量中有loongarch32r-linux-gnusf-
    建议在bashrc中配置环境变量
    参考配置如下：
    export PATH=/home/user/la32r-cross/bin:$PATH
    export LD_LIBRARY_PATH=/home/user/la32r-cross/lib:/home/user/la32r-cross/loongarch32r-linux-gnusf/lib:$LD_LIBRARY_PATH
    export CROSS_COMPILE=loongarch32r-linux-gnusf-
    export ARCH=loongarch
```

```
cd $CHIPLAB_HOME/sims/verilator/run_prog #进入验证程序仿真目录中
./configure.sh --run func/func_lab3     #以仿真运行的程序func_lab3为例子生成对应的Makefile
make                                     #开始编译。若没有编译出错，会自动进行仿真。
cd $CHIPLAB_HOME/sims/verilator/run_prog/log/func/func_lab3_log
gtkwave *.fst                   #查看仿真波形
```