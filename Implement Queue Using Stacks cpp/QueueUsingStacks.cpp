#include "QueueUsingStacks.h"
#include <stack>
#include <iostream>
using namespace std;
QueueUsingStacks::QueueUsingStacks()
{
    MAX_ITEM = 100;
}
QueueUsingStacks::~QueueUsingStacks()
{
    makeEmpty();
}
bool QueueUsingStacks::isFull()
{
    return (stack1.size()==MAX_ITEM);
}
bool QueueUsingStacks::isEmpty()
{
    return stack1.empty();
}
bool QueueUsingStacks::makeEmpty()
{
    while (!isEmpty()) stack1.pop();
    return true;
}
bool QueueUsingStacks::enqueue(int value)
{
    if(isFull())
        return false;
    stack1.push(value);
    print();
    return true;

}
bool QueueUsingStacks::dequeue(int& value)
{
    if(isEmpty()){
        cout<<"Can not dequeue. Queue already empty."<<endl;
        return false;
    }
    else {
        //reverse stack1 to stack2.

        while(!isEmpty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        //deleting first vaule from stack2

        value = stack2.top();
        stack2.pop();

        //again reverse stack2 to stack1.
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        print();
        return true;
    }

}
bool QueueUsingStacks::front(int& value)
{
    if(isEmpty()){
        return false;
    }
    else {
        //reverse stack1 to stack2.

        while(!isEmpty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        //front value

        value = stack2.top();

        //again reverse stack2 to stack1.
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return true;
    }
}
int QueueUsingStacks::size()
{
    return stack1.size();
}
void QueueUsingStacks::print()
{
    stack <int> pStack,rStack;
    pStack = stack1;

    while(!pStack.empty()){
        rStack.push(pStack.top());
        pStack.pop();
    }

    while(!rStack.empty()){
        cout<<rStack.top();
        cout<<"->";
        rStack.pop();
    }
    cout<<endl;
}
