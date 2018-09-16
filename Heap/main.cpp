#include <iostream>
#include "pqtype.h"

using namespace std;
int x;
int main()
{
    PQType<int> heap(20);

    if(heap.IsEmpty()) cout << "Queue is empty\n";
    else cout << "Queue is not empty\n";

    heap.Enqueue(4);
    heap.Enqueue(9);
    heap.Enqueue(2);
    heap.Enqueue(7);
    heap.Enqueue(3);
    heap.Enqueue(11);
    heap.Enqueue(17);
    heap.Enqueue(0);
    heap.Enqueue(5);
    heap.Enqueue(1);

    if(heap.IsEmpty()) cout << "Queue is empty\n";
    else cout << "Queue is not empty\n";

    cout <<"The elements are: ";
    heap.PrintQueue();

    heap.Dequeue(x);
    cout <<"\nDequeued element is: " <<x;
    heap.Dequeue(x);
    cout <<"\nDequeued element is: " <<x;

    cout <<"\nThe elements are: ";
    heap.PrintQueue();

    heap.Dequeue(x);
    heap.Dequeue(x);
    heap.Dequeue(x);

    cout <<"\nThe elements are: ";
    heap.PrintQueue();
}
