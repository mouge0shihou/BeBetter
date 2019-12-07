# 指定编译器
CC = gcc

# CFLAG包括头文件目录
CFLAGS =  -g -Wall 

# 头文件查找路径
INC = 	-Iport -I../../modbus/rtu \
		-I../../modbus/ascii -I../../modbus/include -I../../modbus/tcp

# 静态链接库
LIBS = -lpthread
# 目标
TARGET = tcpmodbus
# 源文件
SRC = demo.c port/portother.c \
	port/portevent.c port/porttcp.c \
	../../modbus/mb.c ../../modbus/tcp/mbtcp.c \
	../../modbus/functions/mbfunccoils.c \
	../../modbus/functions/mbfuncdiag.c \
	../../modbus/functions/mbfuncholding.c \
	../../modbus/functions/mbfuncinput.c \
	../../modbus/functions/mbfuncother.c \
	../../modbus/functions/mbfuncdisc.c \
	../../modbus/functions/mbutils.c 

# 源文件编译为目标文件
OBJS = $(SRC:.c=.o)

.PHONY: clean

# 链接为可执行文件
$(TARGET): $(OBJS)
	$(CC) $^ -o $@ $(LIBS)

# 清楚可执行文件和目标文件
clean:
	rm -f $(OBJS)
	rm -f $(TARGET)

# 编译规则 加入头文件 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<



