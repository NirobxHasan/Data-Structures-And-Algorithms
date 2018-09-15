#include <iostream>
#include "SortedType.cpp"
using namespace std;

int main()
{
    SortedType<int>sortedtype;

    cout<<"Length of list : "<<sortedtype.LengthIs()<<endl;

    sortedtype.InsertItem(5);
    sortedtype.InsertItem(7);
    sortedtype.InsertItem(4);
    sortedtype.InsertItem(2);
    sortedtype.InsertItem(1);

    cout<<"Print The List: "<<endl;
    sortedtype.show();

    bool found = false;
    int item1 =6;
    sortedtype.RetrieveItem(item1,found);
    if(found) cout<<"\nItem " <<item1<< " is found"<<endl;
    else cout<<"\nItem " <<item1<< " is not found"<<endl;

    int item2 =5;
    sortedtype.RetrieveItem(item2,found);
    if(found) cout<<"Item " <<item2<< " is found"<<endl;
    else cout<<"Item " <<item1<< " is not found"<<endl;

    bool isFull = sortedtype.IsFull();
    if(isFull) cout<<"List is full"<<endl;
    else cout<<"List is not full"<<endl;

    return 0;
}
