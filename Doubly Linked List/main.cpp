#include<iostream>
#include "UnsortedDoublyLList.h"

using namespace std;
int main(void)
{
    UnsortedDoublyLList<int> list;

    cout<<"Length: "<<list.getLength()<<endl;
    list.insert(1);
    list.insert(2);
    list.insert(4);
    list.insert(9);
    list.insert(63);
    list.insertAtFront(90);
    list.insertAtBack(60);
    list.FirstItem();
    list.LastItem();

    list.printContent();
    list.reversePrint();
    cout<<"Length: "<<list.getLength()<<endl;
    list.insertAtBack(99);
    list.insertAtFront(82);

    list.deleteAtBack();
    list.deleteAtBack();
    list.deleteAtFront();
    list.deleteAtFront();
    cout<<"Length: "<<list.getLength()<<endl;
    list.insertAtBack(0);
    list.reversePrint();
    list.makeEmpty();
    cout<<"Length: "<<list.getLength()<<endl;

    return 0;
}
