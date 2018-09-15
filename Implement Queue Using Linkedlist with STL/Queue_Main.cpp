#include <iostream>
#include <queue>
int item;
using namespace std;
void PrintQue(queue<int> tempQueue);
int main()
{
    queue<int> que;
    if (!(que.empty()))cout<<"Queue is not empty\n";
    else cout<<"Queue is empty\n";
    que.push(5);
    que.push(7);
    que.push(4);
    que.push(2);
    if (!(que.empty()))cout<<"Queue is not empty\n";
    else cout<<"Queue is empty\n";
    if (!(que.size()==5))cout<<"Queue is not full\n";
    else cout<<"Queue is full\n";
    que.push(6);
    PrintQue(que);
    if (!(que.size()==5))cout<<"Queue is not full\n";
    else cout<<"Queue is full\n";
    que.push(8);
    que.pop();
    que.pop();
    que.pop();

    PrintQue(que);
    que.pop();
    que.pop();
    que.pop();
    if (!(que.empty()))cout<<"Queue is not empty\n";
    else cout<<"Queue is empty\n";

    if (que.size()<=0)cout<<"Queue Underflow\n";
    else que.pop();

    que.push(4);
    que.push(2);
    cout<<"Length is : "<<que.size()<<endl;
    return 0;
}
void PrintQue(queue<int> que)
{
    queue <int> temp = que;
    while (!temp.empty())
    {
        cout <<temp.front()<<" ";
        temp.pop();
    }
    cout << endl;
}
