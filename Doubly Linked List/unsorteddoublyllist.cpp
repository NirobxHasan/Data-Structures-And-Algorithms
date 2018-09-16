#include "UnsortedDoublyLList.h"
#include <exception>
#include <iostream>

template class UnsortedDoublyLList<int>;
template class UnsortedDoublyLList<char>;

using namespace std;
template<class ItemType>
UnsortedDoublyLList<ItemType>::UnsortedDoublyLList()
{
    head = NULL;
    tail = head;
    length = 0;
    iterator = NULL;
}

template<class ItemType>
UnsortedDoublyLList<ItemType>::~UnsortedDoublyLList()
{
    makeEmpty();
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::isEmpty()
{
    return (length == 0);
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::isFull()
{
    try
    {
        NodeType<ItemType>* newNode = new NodeType<ItemType>(ItemType());
        delete newNode;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return true;
    }

    return false;
}

template<class ItemType>
void UnsortedDoublyLList<ItemType>::makeEmpty()
{

    NodeType<ItemType>* location=head;

    while(head)
    {
        location = head;
        head = head->getNext();
        delete location;
        length--;
    }
    head= NULL;

}

template<class ItemType>
int UnsortedDoublyLList<ItemType>::getLength()
{
    return length;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::hasNext()
{
    //Check if iterator's has reached tail.
    return (iterator != this->tail);
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::hasPrevious()
{
    //Check if iterator's is at begining.
    return (iterator != this->head);
}

template<class ItemType>
ItemType UnsortedDoublyLList<ItemType>::getNext()
{
    //If there is a hasNext(), thengetNext() returns a valid item
    if (hasNext())
    {

        return ItemType();
    }

    std::cout << "No valid GetNext calls can be made." << std::endl;
    return ItemType();
}

template<class ItemType>
ItemType UnsortedDoublyLList<ItemType>::getPrevious()
{
    //If there is a hasPrevious(), then getPrevious() returns a valid item
    if (hasPrevious())
    {
        return ItemType();
    }

    std::cout << "No valid GetPrevious calls can be made." << std::endl;
    return ItemType();
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insert(ItemType item)
{

    NodeType <ItemType> *newNode=new NodeType<ItemType>(item);
    if (isFull())
    {
        printContent();
        return false;
    }
    else
    {
        if (this->head == NULL)
        {
            this->head = newNode;
            this->tail = this->head;
            length++;
        }
        else
        {
            this->tail->setNext(newNode);
            newNode->setPrevious(this->tail);
            this->tail = newNode;
            length++;
        }
        printContent();
        return true;
    }
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insertAtFront(ItemType item)
{
    NodeType <ItemType> *newNode= new NodeType<ItemType>(item);
    if (isFull())
    {
        printContent();
        return false;
    }
    else
    {

        if (this->head == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
            length++;
        }
        else
        {
            newNode->setPrevious(NULL);
            newNode->setNext(this->head);
            this->head->setPrevious(newNode->getPrevious());
            this->head = newNode;
            length++;
        }
        printContent();
        return true;
    }
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insertAtBack(ItemType item)
{
    if (isFull())
    {
        printContent();
        return false;
    }
    else
    {
        insert(item);

    }
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteItem(ItemType item)
{

    NodeType<ItemType>*temp=head;
    NodeType<ItemType>*temp2=head;
    if (isFull())
    {
        printContent();
        return false;
    }
    else
    {
        int i=0;
        while(temp)
        {

            if(temp->getData()==item){

                temp2=temp;
                temp=temp->getNext();
                temp->setPrevious(temp2->getPrevious());
                temp=temp->getPrevious();
                temp->setNext(temp2->getNext());
                delete temp2;
                length--;
                return true;
            }

            else
                temp=temp->getNext();
            i++;
        }
    }
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteAtFront()
{
    NodeType<ItemType>*location = head;
    if (isEmpty())
    {
        printContent();
        return false;
    }
    else
    {

        location = head;
        head = head->getNext();
        delete location;
        length--;
        printContent();
        return true;
    }
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteAtBack()
{
    NodeType<ItemType>* temp = tail;
    if (isEmpty())
    {
        printContent();
        return false;
    }
    else{

        tail = temp->getPrevious();
        delete(tail->getNext());
        tail->setNext(NULL);
        length--;
        printContent();
        return true;
    }
}

template<class ItemType>
void UnsortedDoublyLList<ItemType>::printContent()
{
    NodeType<ItemType>* current = head;
    while (current)
    {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }
    std::cout << std::endl;
}
template<class ItemType>
void UnsortedDoublyLList<ItemType>::reversePrint()
{

    NodeType<ItemType>* current = tail;
    while (current)
    {
        std::cout << current->getData() << " ";
        current = current->getPrevious();
    }

    std::cout << std::endl;
}
template<class ItemType>
void UnsortedDoublyLList<ItemType>::reverse()
{
    NodeType<ItemType>*location=head;
    NodeType<ItemType> *temp;

    while(location!=NULL)
    {
        temp=location->getNext();
        location->getNext()->setNext(location->getPrevious());
        location->getPrevious()->setPrevious(temp);

        if(location->getPrevious()!=NULL)
            head=location;
        location=location->getPrevious();
    }
    printContent();
}
template<class ItemType>
void UnsortedDoublyLList<ItemType>::FirstItem(){

    std::cout<<"First Element: "<<head->getData()<<std::endl;
}
template<class ItemType>
void UnsortedDoublyLList<ItemType>::LastItem(){

    std::cout<<"Last Element: "<<tail->getData()<<std::endl;
}


