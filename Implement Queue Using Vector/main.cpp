#include <iostream>
#include "QueueUsingVector.h"
using namespace std;
int value;
int main(int argc, char *argv[])
{
    QueueUsingVector que;
    if(que.isEmpty())
        cout<<"Queue is empty."<<endl;
    que.dequeue(value);
    cout<<endl;
    que.enqueue(103);
    que.enqueue(105);
    que.enqueue(10);
    que.enqueue(11);
    que.dequeue(value);
    que.enqueue(9);
    cout<<"size: "<<que.size()<<endl;
    que.makeEmpty();
    if(que.isEmpty())
        cout<<"Queue is empty."<<endl;
    cout<<"size: "<<que.size()<<endl;
    cout<<endl;
    que.enqueue(10);
    que.enqueue(2);
    que.dequeue(value);
    if(que.dequeue(value)) cout<<"Queue is empty."<<endl;
    que.dequeue(value);
    cout<<endl;
    return 0;
}
