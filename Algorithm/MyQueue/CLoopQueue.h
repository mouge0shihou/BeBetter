#ifndef CLOOPQUEUE_H
#define CLOOPQUEUE_H
#include <iostream>
using namespace std;

template <class T>
class LoopQueue
{
public:
    LoopQueue(int c = 10)
    : capacity(c), begin(0), end(0), queue(nullptr)
    {
        queue = new T[capacity];
    }
    ~LoopQueue()
    {
        delete[]queue;
    }
public:
    bool isEmpty()        //队列的判空
    {
        if (begin == end)
            return true;
        return false;
    }
    int size()            //队列的大小
    {
        return (end - begin + capacity) % capacity + 1; //计算队列长度
    }
    bool push(T t)        //入队列
    {
        if ((end + 1) % capacity == begin) //判断队列是否已满
        {
            return false;
        }
        queue[end] = t;
        end = (end + 1) % capacity;
        return true;
    }
    bool pop()            //出队列
    {
        if (end == begin) //判断队列是否为空
        {
            return false;
        }
        begin = (begin + 1) % capacity;
        return true;
    }
    T front()            //队首元素
    {
        if (end == begin)
        {
            return false;
        }
        return queue[begin];
    }
private:
    int capacity;
    int begin;
    int end;
    T*  queue;
};

#endif // CLOOPQUEUE_H
