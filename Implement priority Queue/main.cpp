#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main()
{
    PriorityQueue prioQue;


    prioQue.enqueue(7, 6);
    prioQue.printQueueContent();
    prioQue.enqueue(6, 2);
    prioQue.printQueueContent();
    prioQue.enqueue(9, 3);
    prioQue.printQueueContent();
    prioQue.enqueue(12, 4);
    prioQue.printQueueContent();
    prioQue.enqueue(5, 5);
    prioQue.printQueueContent();
    prioQue.enqueue(1, 1);
    prioQue.printQueueContent();

    int c;
    cin >> c;
    cout << endl;
    return 0;
}
