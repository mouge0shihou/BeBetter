#include <iostream>
#include "CLoopQueue.h"
#include <string>

using namespace std;

int main()
{
    LoopQueue<string> loopQueue(5);
    cout << loopQueue.isEmpty() << endl;
    loopQueue.push("one");
    loopQueue.push("two");
    loopQueue.push("three");
    loopQueue.push("four");
    loopQueue.push("five");
    cout << loopQueue.isEmpty() << endl;
    cout << loopQueue.pop() << endl;
    cout << loopQueue.size() << endl;
    cout << loopQueue.front() << endl;
    return 0;
}
