//
//  Stack.h
//  CS210_HW1
//
//  Created by Nick Dendrinelis on 1/26/22.
//

#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return(theList.size() == 0);
    }
    const Object& top() const
    {
        return theList.front();
    }
    void push(const Object& x)
    {
        theList.push_front(x);
    }
    Object& pop()
    {
        Object output = theList.front();
        theList.pop_front();
        return output;
    }
private:
    List<Object> theList;
};
