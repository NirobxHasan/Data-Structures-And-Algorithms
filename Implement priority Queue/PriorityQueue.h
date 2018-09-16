 #ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include<climits>
#include<iostream>

class PriorityQueue
{
public:
    struct Node {
        Node* next;
        Node* prev;
        int value;
        int priority;
        Node(int value, int priority)
        {
            this->value = value;
            this->priority = priority;
            next = nullptr;
            prev = nullptr;
        }
        Node()
        {
            this->value = -1;
            this->priority = INT_MAX;
            next = nullptr;
            prev = nullptr;
        }
        ~Node()
        {
            std::cout << "Deleting node(value,priority): (" << value << "," << priority << ")" << std::endl;
        }
    };

    PriorityQueue();
    ~PriorityQueue();
    bool isEmpty() const;
    bool isFull() const;
    bool makeEmpty();
    bool enqueue(int value, int priority);
    bool dequeue(int& nodeValue, int& nodePriority);
    void printQueueContent();

private:
    Node * head;
    Node * tail;
    int length;
};

#endif

