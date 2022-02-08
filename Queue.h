//
//  Queue.h
//  CS210_HW1
//
//  Created by Nick Dendrinelis on 1/26/22.
//

#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return(theList.size() == 0);
    }
    const Object& getFront() const
    {
        return theList.front();
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x);
    }
    Object& dequeue()
    {
        Object output = theList.front();
        theList.pop_front();
        return output;
    }
private:
    List<Object> theList;
};
