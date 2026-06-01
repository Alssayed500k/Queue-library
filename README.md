# Custom Queue Library (C++) 🚀

A highly reusable and efficient **Queue Data Structure** implementation in C++ using Object-Oriented Programming (OOP) and Templates.

## 💡 Concept & Reusability
Instead of reinventing the wheel, this library leverages the power of **Code Reusability** by building the Queue on top of a custom Doubly Linked List (`clsDblLinkedList`). 
This approach ensures minimal code duplication, high maintainability, and clear abstraction.

## ✨ Features
- **Generic Implementation:** Works with any data type (`int`, `string`, custom objects, etc.) thanks to C++ Templates.
- **FIFO Structure:** Strictly follows the *First-In, First-Out* principle by default.
- **Extended Flexibility:** With the latest updates, it now supports advanced manipulation techniques like reversing, indexing, and direct updates.

---

## 🛠️ Available Methods

| Method | Description |
| :--- | :--- |
| `push(T Item)` | Inserts an item at the end of the queue. |
| `pop()` | Removes the first element from the queue. |
| `front()` | Returns the first item without removing it. |
| `back()` | Returns the last item added to the queue. |
| `size()` | Returns the total number of elements. |
| `IsEmpty()` | Returns `true` if the queue is empty. |
| `Print()` | Displays all elements in the queue. |
| `reverse()` | **[New]** Reverses the order of elements in the queue. |
| `InsertAfter(int index, T value)` | **[New]** Inserts a new value after a specific index. |
| `UpdateItem(int index, T newValue)` | **[New]** Updates the value of an element at a specific index. |
| `InsetAtFornt(T value)` | **[New]** Inserts an item at the absolute front of the queue (Deque behavior). |
| `InsertAtBack(T value)` | **[New]** Inserts an item at the end (similar to `push`). |
| `GetItem(int index)` | **[New]** Retrieves an item from a specific index position. |
| `Clear()` | **[New]** Clears all elements, making the queue empty. |

---

## 📝 Details of the New Extensions

The library has been enhanced with powerful methods that extend the standard Queue behavior, shifting it closer to a **Deque (Double-Ended Queue)** or an indexed list:

1. **`reverse()`**: Flips the entire queue execution order. The last element becomes the first, and vice versa.
2. **Advanced Insertions (`InsertAfter`, `InsetAtFornt`, `InsertAtBack`)**: Allows you to bypass the strict FIFO rule when necessary, enabling insertions at any position or directly at the front/back.
3. **Random Access & Modification (`GetItem`, `UpdateItem`)**: Gives you the ability to view or modify elements at specific positions using index numbers without needing to `pop()` other elements first.
4. **`Clear()`**: A quick utility function to reset the queue and free up memory instantly.

---

## 💻 Source Code

```cpp
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
	
	//--- More extensions ---
	
	void reverse()
	{
		_MyList.Reverse();
	}
	
	bool InsertAfter(int nodeIndex, T value)
	{
		return _MyList.InsertAfter(nodeIndex, value); // Fixed missing return
	}
	
	bool UpdateItem(int NodeIndex, T newValue)
	{
		return _MyList.UpdateItem(NodeIndex, newValue);
	}
    
	void InsetAtFornt(T Value)
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
