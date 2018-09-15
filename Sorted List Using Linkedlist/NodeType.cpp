

#include "NodeType.h"
#include <iostream>

template class NodeType<int>;
template class NodeType<char>;


template<class ItemType>
NodeType<ItemType>::NodeType()
{
    this->next = nullptr;
}

template<class ItemType>
NodeType<ItemType>::NodeType(ItemType data)
{
    this->data = data;
    this->next = nullptr;
}

template<class ItemType>
NodeType<ItemType>::~NodeType()
{
}

template<class ItemType>
void NodeType<ItemType>::SetData(ItemType data)
{
    this->data = data;
}

template<class ItemType>
ItemType NodeType<ItemType>::GetData()
{
    return this->data;
}

template<class ItemType>
void NodeType<ItemType>::SetNext(NodeType * next)
{
    this->next = next;
}

template<class ItemType>
NodeType<ItemType>* NodeType<ItemType>::GetNext()
{
    return this->next;
}

