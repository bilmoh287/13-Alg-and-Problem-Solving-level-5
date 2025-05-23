#pragma once
#include<iostream>

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	int _Size = 0;
public:
	class Node
	{
	public:
		T value;
		Node* next;
	};

	Node* head = NULL;

	void Push(T value)
	{
		Node* new_Node = new Node();
		new_Node->value = value;
		new_Node->next = NULL;

		if (head == NULL)
		{
			head = new_Node;
			_Size++;
			return;
		}

		Node* LastNode = head;
		while (LastNode->next != NULL)
		{
			LastNode = LastNode->next;
		}

		LastNode->next = new_Node;
		_Size++;
		return;
	}

	void Pop()
	{
		if (head == NULL)
			return;
		Node* FirstNode = head;
		head = FirstNode->next;
		delete FirstNode;
		_Size--;
	}

	T Front()
	{
		return head->value;
	}

	T Back()
	{
		Node* Current = head;
		while (Current->next != NULL)
		{
			Current = Current->next;
		}
		return Current->value;
	}

	int Size()
	{
		return _Size;
	}

	void Print()
	{
		Node* current = head;
		while (current != NULL)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << "\n";
	}
};

