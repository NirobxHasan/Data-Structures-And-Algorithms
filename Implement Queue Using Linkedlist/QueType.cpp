#include "QueType.h"
#include <iostream>
using namespace std;

template class QueType<int>;
template class QueType<char>;

template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL;
    rear = NULL;
}
template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL);
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
     NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (std::bad_alloc exception)
    {
        return true;
    }
}
template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    NodeType* temp = new NodeType;
    temp->info = newItem;
    temp->next = NULL;
    if(front == NULL)
    {
        front = rear = temp;
        rear ->next = NULL;
    }else
    {
        rear->next = temp;
        rear = temp;
        rear->next= NULL;
    }

}
template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty()) throw EmptyQueue();
    NodeType* tempPtr;
    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front==NULL)
        rear = NULL;
    delete tempPtr;
}
template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}
template <class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}

template <class ItemType>
void QueType<ItemType>::printlist()
{

    NodeType* temp;

    temp = front;
    std::cout<<"print the list: ";
    while (temp!=NULL)
    {
        std::cout<<"  "<<temp->info;
        temp = temp->next;
    }
    std::cout<<std::endl;
}
template <class ItemType>
int QueType<ItemType>::Length() const
{
    NodeType* temp;

    temp = front;
    int Count=0;
    while (temp!=NULL)
    {
        Count++;
        temp = temp->next;
    }
    return Count;
}
