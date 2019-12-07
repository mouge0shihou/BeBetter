# 指令编译器和选项
CC = gcc
CFLAGS = -Wall -std=gnu99

# 可执行文件
TARGET=test
# C文件
SRCS = test.c
# 目标文件
OBJS = $(SRCS:.c=.o)

# 库文件
DLIBS = -lm


# 链接为可执行文件
$(TARGET):$(OBJS)
#	@echo TARGET:$@
#	@echo OBJECTS:$^
	$(CC) -o $@ $^ $(DLIBS)

clean:
	rm -rf $(TARGET) $(OBJS)

# 连续动作，请清除再编译链接，最后执行
exec:clean $(TARGET)
	@echo 开始执行
	./$(TARGET)
	@echo 执行结束

# 编译规则 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<
