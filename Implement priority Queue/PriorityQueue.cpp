#include "PriorityQueue.h"
#include <exception>
#include <iostream>

using namespace std;

PriorityQueue::PriorityQueue()
{
    length = 0;
    head = NULL;
    tail = NULL;
}

PriorityQueue::~PriorityQueue()
{
    makeEmpty();
}

bool PriorityQueue::isEmpty() const
{
    return (tail == nullptr);
}

bool  PriorityQueue::isFull() const
{
    Node* location;
    try {
        location = new Node();
        delete location;
        return false;
    }

    catch (std::bad_alloc exception)
    {
        return true;
    }
}
bool PriorityQueue::makeEmpty()
{
    Node* temp;
    while (temp!=NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
    return true;
}




bool PriorityQueue::enqueue(int val, int prio)
{
    Node* location;
    Node* newNode = new Node;
    newNode->value = val;
    newNode->priority = prio;
    location = head;
    if(head == nullptr)
    {
        newNode->next = nullptr;
        newNode->prev = nullptr;
        head = newNode;
        tail = newNode;
        length++;
        return true;
    }
    else
    {
        if(prio < head->priority)
        {
            newNode->next = head;
            newNode->prev = nullptr;
            head->prev = newNode;
            head = newNode;
            length++;
            return true;
        }
        while(location != nullptr)
        {
            if(prio <= location->priority)
            {
                newNode->prev = location->prev;
                newNode->next = location;
                location->prev->next = newNode;
                location->prev = newNode;
                length++;
                return true;
            }
            else
                location = location->next;
        }
    }
    newNode->prev = tail;
    newNode->next = nullptr;
    tail->next = newNode;
    tail = newNode;
    length++;
    return true;
}
bool PriorityQueue::dequeue(int& nodeValue, int& nodePriority)
{
    Node *tempPtr = tail;
    if(isEmpty())
    {
        return false;
    }

    else
    {
        nodeValue = tempPtr->value;
        nodePriority = tempPtr->priority;
        tail = tail->prev;
        tempPtr->next = nullptr;
        tempPtr->prev = nullptr;
        delete tempPtr;
        length--;
        return true;
    }
}
void PriorityQueue::printQueueContent()
{
    Node *tempPtr = tail;
    while(tempPtr != nullptr)
    {
        cout<<tempPtr->value<<" ";
        tempPtr = tempPtr->prev;
    }
    cout<<endl;
}
