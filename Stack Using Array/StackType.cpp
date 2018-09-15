#include "StackType.h"
#include <iostream>
template class StackType<int>;
template class StackType<float>;

template <class ItemType>
StackType<ItemType>::StackType()
{
	top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
	return (top == -1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
	return (top ==  MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
  if(!IsFull()){
   top++;
   items[top]=newItem;
  }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if(!IsEmpty()){
        top--;
    }
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if(IsEmpty()) return 0;
    else return items[top];
}
template <class ItemType>
void StackType<ItemType>::print()
{
    std::cout<<"Print Item: ";
    for(int index=0;index<top+1;index++)
    {
        std::cout<<items[index]<<" ";
    }
    std::cout<<std::endl;
}
