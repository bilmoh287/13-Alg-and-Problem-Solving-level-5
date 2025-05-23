#pragma once
#include<iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
	int _Size = 0;
public:
	class Node
	{
	public:

		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* new_node = new Node();
		new_node->value = Value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL)
		{
			head->prev = new_node;
		}

		head = new_node;
		_Size++;
	}

	void PrintList()

	{
		Node* Current = head;
		while (Current != NULL) {
			cout << Current->value << " ";
			Current = Current->next;
		}
		cout << "\n";
	}

	Node* Find(T Value)
	{
		Node* Current = head;
		while (Current != NULL)
		{
			if (Current->value == Value) 
			{
				return Current;
			}
			Current = Current->next;
		}
		return NULL;
	}

	void InsertAfter(Node* current, T value) {


		/*  1 - Create a new node with the desired value.
			 2-Set the next pointer of the new node to the next node of the current node.
			 3-Set the previous pointer of the new node to the current node.
			 4-Set the next pointer of the current node to the new node.
			 5-Set the previous pointer of the next node to the new node(if it exists).
		*/

		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = current->next;
		newNode->prev = current;

		if (current->next != NULL) {
			current->next->prev = newNode;
		}
		current->next = newNode;
		_Size++;
	}

	void InsertAtEnd(T Value)
	{
		Node* new_nod = new Node();
		new_nod->next = NULL;
		new_nod->value = Value;

		if (head == NULL)
		{
			new_nod->prev = NULL;
			head = new_nod;
		}
		else
		{
			Node* Current = head;
			while (Current->next != NULL)
			{
				Current = Current->next;
			}
			Current->next = new_nod;
			new_nod->prev = Current;
		}
		_Size;
	}

	void DeleteNode(Node* & NodeToDelete)
	{
		if (head == NULL || NodeToDelete == NULL)
		{
			return;
		}
		if (head == NodeToDelete)
		{
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL)
		{
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL)
		{
			NodeToDelete->prev->next = NodeToDelete->next;
		}

		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode()
	{
		if (head == NULL)
		{
			return;
		}
		Node* temp = head;
		head = head->next;

		if (head != NULL)
		{
			head->prev = NULL;
		}
		delete temp;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (head == NULL)
		{
			return;
		}

		if (head->next == NULL)
		{
			delete head;
			head = NULL;
			return;
		}

		Node* Current = head;
		//finding Node before last Node
		while (Current->next->next != NULL)
		{
			Current = Current->next;
		}

		Node* temp = Current->next;
		Current->next = NULL;
		delete temp;
		_Size--;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0);
	}

	void Clear()
	{
		head = NULL;
		_Size = 0;
	}
};

