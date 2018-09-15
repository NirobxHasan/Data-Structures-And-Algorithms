#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    UnsortedType<int> unsortedList;

    bool isFull = unsortedList.isFull();
    if(isFull) cout<<"List Not Empty"<<endl;
    else cout<<"List Empty"<<endl;

    unsortedList.insertItem(23);
    unsortedList.insertItem(-57);
    unsortedList.insertItem(25);
    unsortedList.insertItem(78);
    unsortedList.printList();

    unsortedList.insertItem(96);
    unsortedList.printList();
    cout<<"Length of the list = "<<unsortedList.lengthIs()<<endl;

    bool found = false;
    int item1=96;
    unsortedList.retrieveItem(item1,found);
    if(found) cout<<"Item " <<item1<< " is found"<<endl;
    else cout<<"Item " <<item1<< " is not found"<<endl;
    int item2=-69;
    unsortedList.retrieveItem(item2,found);
    if(found) cout<<"Item " <<item2<< " is found"<<endl;
    else cout<<"Item " <<item2<< " is not found"<<endl;

    unsortedList.deleteItem(25);
    unsortedList.printList();
    isFull = unsortedList.isFull();
    if(isFull) cout<<"List is full"<<endl;
    else cout<<"List is not full"<<endl;


    return 0;
}
