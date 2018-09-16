#ifndef UNSORTEDDOUBLYLLIST_H_INCLUDED
#define UNSORTEDDOUBLYLLIST_H_INCLUDED

#include "NodeType.h"

template<class ItemType>
class UnsortedDoublyLList
{
public:
    UnsortedDoublyLList();
    ~UnsortedDoublyLList();

    bool isEmpty();
    bool isFull();
    void makeEmpty();
    int getLength();


    /* Iterator functions */
    bool hasNext();
    bool hasPrevious();
    ItemType getNext();
    ItemType getPrevious();
    /**********************************/

    bool insert(ItemType item);
    bool insertAtFront(ItemType item);
    bool insertAtBack(ItemType item);

    bool deleteItem(ItemType item);
    bool deleteAtFront();
    bool deleteAtBack();

    void printContent();
    void reversePrint();
    void reverse();
    void FirstItem();
    void LastItem();
    void sort();

private:
    NodeType<ItemType>* head;
    NodeType<ItemType>* tail;
    int length;
    NodeType<ItemType>* iterator;
};



#endif // UNSORTEDDOUBLYLLIST_H_INCLUDED
