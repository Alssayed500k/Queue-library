#pragma once

#include <iostream>
#include "clsDblLinkedList.h"


using namespace std;
template <class T>

class clsMyQueue
{

protected:
	clsDblLinkedList <T> _MyList;

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	
	void pop()
	{
		_MyList.DeleteFirstNode();
	}

   void Print()
	{
		_MyList.PrintList();
	}

	int size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(size() - 1);
	}

	//---More extensions----
	void reverse()
	{
		_MyList.Reverse();
	}
	
	bool InsertAfter(int nodeIndex , T value)
	{
		_MyList.InsertAfter(nodeIndex , value);
	}
	
	
	bool UpdateItem(int NodeIndex , T newValue)
    {
    	return _MyList.UpdateItem(NodeIndex , newValue);
    }
    
    
    void  InsetAtFornt(T Value)
    {
    	_MyList.InsertAtBeginning(Value);
    }
    

    void InsertAtBack(T value)
    {
    	_MyList.InsertAtEnd(value);
    }
    
   
    T GetItem(int index)
    {
    	return _MyList.GetItem(index);
    }
    
    		
    void Clear()
    {
    	_MyList.Clear();
	}
	
	
};

