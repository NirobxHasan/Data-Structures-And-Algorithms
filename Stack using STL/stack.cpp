#include <iostream>
#include <stack>
using namespace std;
const int MAX_SIZE =5;
int main()
{
    std::stack<int> myStack;
    if(myStack.empty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;

    myStack.push(5);
    myStack.push(7);
    myStack.push(4);
    myStack.push(2);
    int stackSize = myStack.size();

    if(myStack.empty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;


    if(stackSize==MAX_SIZE) cout<<"Stack is FULL"<<endl;
    else cout<<"Stack is not Full"<<endl;


    while (!myStack.empty())
    {
         std::cout << ' ' << myStack.top();
         myStack.pop();
    }
    std::cout << '\n';
    myStack.push(5);
    myStack.push(7);
    myStack.push(4);
    myStack.push(2);

    myStack.push(3);
    stackSize = myStack.size();

    while (!myStack.empty())
    {
         std::cout << ' ' << myStack.top();
         myStack.pop();
    }
    std::cout << '\n';

    if(stackSize==MAX_SIZE) cout<<"Stack is FULL"<<endl;
    else cout<<"Stack is not Full"<<endl;
    myStack.push(5);
    myStack.push(7);
    myStack.push(4);
    myStack.push(2);
    myStack.push(3);
    myStack.pop();
    myStack.pop();
    cout<<myStack.top();
    return 0;
}
