#include <iostream>
#include "queueType.h"
using namespace std;

int main()
{
    queueType<int> Queue (4);


    if(Queue.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<" Queue is not Empty" <<endl;

    Queue.Enqueue(5);
    Queue.Enqueue(7);
    Queue.Enqueue(4);
    Queue.Enqueue(2);

    if(Queue.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<"Queue is not Empty" <<endl;

    if(Queue.IsFull()) cout<<"Queue is Full" <<endl;
    else cout<<"Queue is not Full" <<endl;

    Queue.Enqueue(6);
    Queue.printQueue();
    if(Queue.IsFull()) cout<<"Queue is Full" <<endl;
    else cout<<"Queue is not Full" <<endl;
    try{
        Queue.Enqueue(8);
    }catch (FullQueue exciptionObject)
    {
        cout<<"Queue Overflow"<<endl;
    }
    int item;
    Queue.Dequeue(item);
    Queue.Dequeue(item);
    Queue.printQueue();

    Queue.Dequeue(item);
    Queue.Dequeue(item);
    Queue.Dequeue(item);

    if(Queue.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<" Queue is not Empty" <<endl;

    try{
         Queue.Dequeue(item);
    }catch(EmptyQueue exciptionObject)
    {
        cout<<"Queue Underflow"<<endl;
    }

    Queue.Enqueue(21);
    Queue.Enqueue(26);
    Queue.Enqueue(13);
    Queue.Enqueue(26);
    Queue.Enqueue(29);
    Queue.ReplaceItem(26,9);

    Queue.printQueue();
    
    return 0;
}
