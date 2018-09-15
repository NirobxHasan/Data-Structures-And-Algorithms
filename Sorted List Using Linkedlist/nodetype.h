

#pragma once

template<class ItemType>
class NodeType
{
public:
        NodeType();
        NodeType(ItemType data);
        ~NodeType();

        void SetData(ItemType data);
        ItemType GetData();
        void SetNext(NodeType* next);
        NodeType<ItemType>* GetNext();

private:
        ItemType data;
        NodeType<ItemType>* next;
};
