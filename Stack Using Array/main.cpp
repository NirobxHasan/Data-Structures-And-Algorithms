#include <iostream>
#include "StackType.h"
using namespace std;

int main()
{
    StackType<int> stacktype;
    if(stacktype.IsEmpty()) cout<<"Stack is empty."<<endl;
    else cout<<"Stack is not empty."<<endl;

    stacktype.Push(5);
    stacktype.Push(7);
    stacktype.Push(4);
    stacktype.Push(2);

    if(stacktype.IsEmpty()) cout<<"Stack is empty."<<endl;
    else cout<<"Stack is not empty."<<endl;
    stacktype.print();

    stacktype.Push(3);
    stacktype.print();

    if(stacktype.IsFull()) cout<<"Stack is full."<<endl;
    else cout<<"Stack is not full."<<endl;
    stacktype.Pop();
    stacktype.Pop();
    cout<<"Top Item: "<<stacktype.Top();

    return 0;
}
