#include<iostream>
#include "stacktype.h"
using namespace std;


int main()
{
    StackType<int> mystack;
    if (mystack.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;
    mystack.Push(5);
    mystack.Push(7);
    mystack.Push(4);
    mystack.Push(2);
    if (mystack.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;

    if (mystack.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    mystack.printlist();
    mystack.Push(3);
    mystack.printlist();

    if (mystack.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    mystack.Pop();
    mystack.Pop();

    cout<<"Top: "<<mystack.Top()<<'\n';

    StackType<int> newstack;
    newstack.Push(21);
    newstack.Push(26);
    newstack.Push(13);
    newstack.Push(26);
    newstack.Push(29);
    cout<<"##Before replace##\n";
    newstack.printlist();
    newstack.ReplaceItem(26,9);
    cout<<"##After replace##\n";
    newstack.printlist();

    return 0;
}
