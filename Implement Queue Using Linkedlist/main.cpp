#include <iostream>
#include "QueType.h"
using namespace std;
int item;
int main()
{
    QueType<int> que;
    if(que.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);
    if(que.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;
    if(que.IsFull()) cout<<"Queue is Full"<<endl;
    else cout<<"Queue is not Full"<<endl;
    que.Enqueue(6);
    que.printlist();
    if(que.IsFull()) cout<<"Queue is Full"<<endl;
    else cout<<"Queue is not Full"<<endl;
    que.Enqueue(8);


    que.Dequeue(item);
    que.Dequeue(item);
    que.Dequeue(item);
    que.printlist();
    que.Dequeue(item);
    que.Dequeue(item);
    que.Dequeue(item);
    if(que.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;
    try{
         que.Dequeue(item);
    }catch(EmptyQueue exciptionObject)
    {
        cout<<"Queue Underflow"<<endl;
    }
    QueType<char> myque;
    myque.Enqueue('n');
    myque.Enqueue('o');
    myque.Enqueue('w');
    myque.Enqueue('y');
    myque.Enqueue('h');
    myque.printlist();
    cout<<"Length is: "<<myque.Length();
    return 0;
}
