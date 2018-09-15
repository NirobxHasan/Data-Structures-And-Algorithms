#include <iostream>
#include <queue>
const int queueSize = 5;
using namespace std;

void print(queue <int> Que);
void push(queue<int>que,int item );
void pop(queue<int>que);
void replaceItem(queue<int>&Que, int oldItem, int newItem);

int main(int argc, char *argv[])
{

     queue<int> aQueue;

     if(aQueue.size()==0) cout<<"Queue is empty"<<endl;
     else cout<<"Queue is not empty"<<endl;

     aQueue.push(5);
     aQueue.push(7);
     aQueue.push(4);
     aQueue.push(2);

     if(aQueue.size()==0) cout<<"Queue is empty"<<endl;
     else cout<<"Queue is not empty"<<endl;

     if(aQueue.size()==queueSize) cout<<"Queue is full"<<endl;
     else cout<<"Queue is not full"<<endl;

     aQueue.push(6);
     print(aQueue);

     if(aQueue.size()==queueSize) cout<<"Queue is full"<<endl;
     else cout<<"Queue is not full"<<endl;


    push(aQueue,8);


    aQueue.pop();
    aQueue.pop();
    print(aQueue);

    aQueue.pop();
    aQueue.pop();
    aQueue.pop();

    if(aQueue.size()==0) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;

    pop(aQueue);

//________________________//

    queue<int> myqueue;

    myqueue.push(21);
    myqueue.push(26);
    myqueue.push(13);
    myqueue.push(26);
    myqueue.push(29);
    cout<<"\nBefore replace item"<<endl;
    print(myqueue);
    cout<<"\nAfter replace item"<<endl;
    replaceItem(myqueue,26,9);
    print(myqueue);





    return 0;
}


void print(queue <int> Que)
{
    queue <int> myqueue = Que;
    cout<<"Print the Queue:";
    while (!myqueue.empty())
    {
        cout << "   " << myqueue.front();
        myqueue.pop();
    }
    cout << '\n';
}
void push(queue<int>que,int item ){
    queue<int>myqueue=que;
    myqueue.push(item);
    if(myqueue.size()>queueSize)
    cout<<"Queue Overflow"<<endl;
}
void pop(queue<int>que){
    queue<int>myqueue=que;

    if(myqueue.size()==0) cout<<"Queue is Underflow"<<endl;
}
void replaceItem(queue<int>&Que, int oldItem, int newItem)
{
    queue<int>aqueue;
    while (!Que.empty())
    {
        if(Que.front()==oldItem)
        {
            aqueue.push(newItem);
            Que.pop();
        }
        int value = Que.front();
        aqueue.push(value);
        Que.pop();
    }
    Que.swap(aqueue);
}
