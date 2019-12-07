# 指令编译器和选项
# 修改为树莓派交叉工具链
CC = arm-linux-gnueabihf-gcc
CFLAGS=-Wall -std=gnu99

# 目标文件
TARGET=test
# 源文件
SRCS = 	test.c \
		./test-add/test-add.c \
		./test-sub/test-sub.c
# 头文件查找路径
INC = -I./test-add -I./test-sub
# 目标文件
OBJS = $(SRCS:.c=.o)
# 链接为可执行文件
$(TARGET):$(OBJS)
#	@echo TARGET:$@
#	@echo OBJECTS:$^
	$(CC) -o $@ $^

clean:
	rm -rf $(TARGET) $(OBJS)

# 连续动作，请清除再编译链接，最后执行
exec:clean $(TARGET)
	@echo 开始执行
	./$(TARGET)
	@echo 执行结束

# 编译规则 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<
