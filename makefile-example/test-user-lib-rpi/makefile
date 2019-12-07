# 指定编译器和选项
# 指定树莓派交叉编译器
CC = arm-linux-gnueabihf-gcc
CFLAGS = -Wall -std=gnu99

# 目标文件
TARGET = test
# C文件
SRCS = test.c
# 头文件查找路径
INC = -I.
# 库文件和库查找路径
DLIBS = -ltest
LDFLAGS = -L./lib

# 目标文件
OBJS = $(SRCS:.c=.o)

# 链接为可执行文件
$(TARGET):$(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS) $(DLIBS)

clean:
	rm -rf $(TARGET) $(OBJS)

# 编译规则 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<
