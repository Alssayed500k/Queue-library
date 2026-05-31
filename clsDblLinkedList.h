#pragma once
#include <iostream>
#include <vector>

using namespace std;

//template global class

template <class T>
class clsDblLinkedList
{
  private:
	int _Size = 0;

  public:
	struct Node
	{
		T value;
		Node *prev;
		Node *next;
	};
	Node *head = nullptr;
	Node *Tail = nullptr;

	void InsertAtBeginning(T value)
	{
		//Creat a new node on heap memory
		Node *new_node = new Node();

		//Insert value
		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL)
		{
			//Set previous of head to point to the new node
			head->prev = new_node;
		}
		head = new_node;

		//We need to store the first node of linked list for using later on.
		// a first node in this method it's a last node of the linked list

		if (head->next == NULL)
		{
			Tail = head;
		}
		++_Size;
	}

	void InsertAfter(Node *currentNode, T value)
	{
		/*
  1- set the next of new node to point to the next of current node
  2-Set the next of currnt node  to point to new node.
  3-set the previous of new node to point to crruent  node*/
		Node *newNode = new Node();
		//insert value
		newNode->value = value;

		//Connecte the node with the oters nodes.
		newNode->next = currentNode->next;
		newNode->prev = currentNode;

		//In case the currentNode is not last node
		if (currentNode->next != NULL)
		{
			currentNode->next->prev = newNode;
		}
		else
		{
			Tail = newNode;
		}
		currentNode->next = newNode;
		++_Size;
	}

	void InsertAtEnd(T value)
	{
		if (head == NULL)
		{
			InsertAtBeginning(value);
			return;
		}

		Node *newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;

		if (Tail != NULL && Tail->next == NULL)
		{
			newNode->prev = Tail;
			Tail->next = newNode;
			Tail = newNode;
			++_Size;
		}

		return;
	}

	void PrintList()
	{
		Node *current = head;

		while (current != NULL)
		{
			cout << current->value << " ";
			current = current->next;
		}
	}

	Node *Find(T value)
	{
		Node *current = head;
		while (current != NULL)
		{
			if (current->value == value)
			{
				return current;
			}
			current = current->next;
		}

		return NULL;
	}

	void DeleteFirstNode()
	{
		if (head == NULL)
		{
			return;
		}

		Node *current = head;

		//In case the head contains more of one node
		if (current->next != NULL)
		{
			//Move the head to next node
			head = head->next;
			//Set the previous of the head to point to NULL
			head->prev = NULL;

			//Free Memory
			delete current;
			--_Size;
			return;
		}

		//In case the head contains one node only
		//Free memory
		delete head;
		head = NULL;
		--_Size;
		return;
	}

	void DeleteNode(Node *nodeToDelete)
	{
		//In case Delete the first node
		if (nodeToDelete == head)
		{
			head = head->next;
		}
		//In case Delete the last node
		if (Tail == nodeToDelete)
		{
			Tail = nodeToDelete->prev;
		}

		//In case the node is not first and lats in linked
		//list:

		//Steps for deleting a node:
		//1-Set The next of previous of the nodeToDelete to point to the next of  the nodeToDelete.

		//2-Set the  previous of next of the nodeToDelete to point to the previous of nodeToDelete

		if (nodeToDelete->prev != NULL)
		{
			nodeToDelete->prev->next = nodeToDelete->next;
		}
		if (nodeToDelete->next != NULL)
		{
			nodeToDelete->next->prev = nodeToDelete->prev;
		}

		delete nodeToDelete;
		--_Size;
	}

	void DeleteLastNode()
	{
		if (head == NULL)
		{
			return;
		}
		Node *Current = Tail;
		//In case the linked list contains one node
		if (head == Tail)
		{
			head = NULL;
			Tail = NULL;
		}
		else
		{
			Tail = Tail->prev;
			Tail->next = NULL;
		}
		delete Current;
		--_Size;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void Clear()
	{
		while (_Size > 0)
		{
			this->DeleteFirstNode();
		}
	}

	void Reverse()
	{
		Node *current = head;
		Node *tem = nullptr;

		while (current != nullptr)
		{
			tem = current->prev;

			current->prev = current->next;
			current->next = tem;
			current = current->prev;
		}
		if (tem != nullptr)
		{
			head = tem->prev;
		}
	}

	Node *GetNode(int index)
	{
		short counter = 0;
		if (index > _Size - 1 || index < 0)
		{
			return nullptr;
		}
		Node *current = head;

		while (current != nullptr && (current->next != nullptr))
		{
			if (index == counter)
			{
				break;
			}
			++counter;
			current = current->next;
		}
		return current;
	}

	T GetItem(int index)
	{
		Node *itemsOfNode = GetNode(index);

		if (itemsOfNode == nullptr)
		{
		return T{};
		}
		return itemsOfNode->value;
	}

	bool UpdateItem(int index, T new_value)
	{
		Node *node = GetNode(index);

		if (node != nullptr)
		{
			node->value = new_value;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool InsertAfter(int Nodeindex, T newValue)
	{
		Node *NodeItems = GetNode(Nodeindex);

		if (NodeItems != nullptr)
		{
			InsertAfter(NodeItems, newValue);
			return true;
		}
		else
		{
			return false;
		}
	}
};
