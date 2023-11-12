
## Create executable with optional arguments

1. try ccmake from build directory

```shell
cd tut/008
./run.sh
cd build
ccmake . # press enter to change value, then press c to configure, then g to save/exit
ninja
ctest -V
```
