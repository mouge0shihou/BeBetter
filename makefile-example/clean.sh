#!/bin/sh 
cd test-single
make clean

cd ../
cd test-multi
make clean

cd ../
cd test-inc
make clean

cd ../
cd test-inc-rpi
make clean

cd ../
cd test-define
make clean

cd ../
cd test-lib
make clean

cd ../
cd test-user-lib
make clean
cd libtest
make clean
cd ../

cd ../
cd test-user-lib-rpi
make clean
cd libtest
make clean
cd ../

cd ../
cd freemodbus-v1.5.0-linuxtcp-only/demo/LINUXTCP
make clean

# 清理所有的临时文件
cd ../../../
pwd
echo 清除临时文件;
find . -name "*.c~" -exec rm -f {} \;
find . -name "*.h~" -exec rm -f {} \;
find . -name "*.sh~" -exec rm -f {} \;
find . -name "makefile~" -exec rm -f {} \;
find . -name "Makefile~" -exec rm -f {} \;

