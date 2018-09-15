#include "SortedType.h"
#include <iostream>
using namespace std;

int main(void)
{
    SortedType<int> sortedList;
    cout<<"Length: "<<sortedList.GetLength()<<endl;

    sortedList.PutItem(1);
    sortedList.PutItem(2);
    sortedList.PutItem(4);
    sortedList.PutItem(5);
    sortedList.PutItem(7);
    sortedList.PrintListContent();


    int item=6;
    bool found = sortedList.GetItem(item);

    if(found) cout<<item<<" is found"<<endl;
    else cout<<item<<" is not found"<<endl;

    int item2=5;
    found = sortedList.GetItem(item2);

    if(found) cout<<item2<<" is found"<<endl;
    else cout<<item2<<" is not found"<<endl;

    bool isFull = sortedList.IsFull();
    if(isFull) cout<<"List is full"<<endl;
    else cout<<"List is not full"<<endl;

    bool deleted = sortedList.DeleteItem(1);
    sortedList.PrintListContent();

    return 0;
}

