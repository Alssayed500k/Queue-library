# Custom Queue Library (C++) 🚀

A highly reusable and efficient **Queue Data Structure** implementation in C++ using Object-Oriented Programming (OOP) and Templates.

## 💡 Concept & Reusability
Instead of reinventing the wheel, this library leverages the power of **Code Reusability** by building the Queue on top of a custom Doubly Linked List (`clsDblLinkedList`). 
This approach ensures minimal code duplication, high maintainability, and clear abstraction.

## ✨ Features
- **Generic Implementation:** Works with any data type (`int`, `string`, custom objects, etc.) thanks to C++ Templates.
- **FIFO Structure:** Strictly follows the *First-In, First-Out* principle.
- **Clean Interface:** Provides standard, easy-to-use Queue methods.

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
Author: Anwer EL-Sayed.
