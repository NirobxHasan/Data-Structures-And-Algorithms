#include "QueueUsingVector.h"
#include <iostream>
#include <exception>
using namespace std;
QueueUsingVector::QueueUsingVector()
{

}

QueueUsingVector::~QueueUsingVector()
{
    isEmpty();
}
bool QueueUsingVector::isFull()
{
    if(vec.size() > vec.capacity())
        return true;
    else
        return false;

}
bool QueueUsingVector::isEmpty()
{

    return vec.empty();

}
bool QueueUsingVector::makeEmpty()
{
    if(isEmpty())
        return false;

    vec.clear();
    return true;

}
bool QueueUsingVector::enqueue(int value)
{
    if (isFull()) return false;
    vec.push_back(value);

    print();
    return true;
}
bool QueueUsingVector::dequeue(int& value)
{
    if(isEmpty()) {
        std::cout<<"Can not dequeue. Queue already empty."<<std::endl;
        return false;
    }
    vec.erase(vec.begin());
    value = * vec.begin();
    //print Value;
    print();
    return true;

}
bool QueueUsingVector::front(int& value)
{
    if(vec.empty()) return false;
    value = * vec.begin();
    return true;

}
int QueueUsingVector::size()
{
    return vec.size();
}
void QueueUsingVector::print()
{
    for(int index =0; index<vec.size(); index++ ){
        std::cout<<vec[index];
        std::cout<<"->";
    }
    std::cout<<std::endl;
}
