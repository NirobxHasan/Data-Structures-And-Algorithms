#include <iostream>
#include "UnsortedType.h"

using namespace std;

int main()
{
    UnsortedType<int>unsortedList;
    unsortedList.InsertItem(5);
    unsortedList.InsertItem(7);
    unsortedList.InsertItem(6);
    unsortedList.InsertItem(9);
    cout<<endl;
    unsortedList.printList();
    cout<<endl;
    cout<<"Length "<<unsortedList.LengthIs()<<endl;

    unsortedList.InsertItem(1);
    unsortedList.printList();
    cout<<endl;
    bool found = false;
    int item1=4;
    unsortedList.RetrieveItem(item1,found);
    if(found) cout<<"Item " <<item1<< " is found"<<endl;
    else cout<<"Item " <<item1<< " is not found"<<endl;

    int item2=5;
    unsortedList.RetrieveItem(item2,found);
    if(found) cout<<"Item " <<item2<< " is found"<<endl;
    else cout<<"Item " <<item2<< " is not found"<<endl;
    int item3=9;
    unsortedList.RetrieveItem(item1,found);
    if(found) cout<<"Item " <<item3<< " is found"<<endl;
    else cout<<"Item " <<item3<< " is not found"<<endl;

    return 0;
}
