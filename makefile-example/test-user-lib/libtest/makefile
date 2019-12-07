# 指令编译器和选项
CC = gcc
CFLAGS = -Wall -std=gnu99

# 目标文件
TARGET = libtest.so
# C文件
SRCS = test-add.c test-sub.c
# 目标文件
OBJS = $(SRCS:.c=.o)

# 链接为可执行文件
$(TARGET):$(OBJS)
	$(CC) -shared -o $@ $^
	mv $(TARGET) ../lib

clean:
	rm -rf $(TARGET) $(OBJS)

install:
	cp $(TARGET) /usr/lib

# 编译规则 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -fPIC -c $<
#	$(CC) $(CFLAGS) -shared -o $@ -c $<
