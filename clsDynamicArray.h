#pragma once

#include<iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
public:
	T* OriginalArray;

	clsDynamicArray(int Size)
	{
		if (Size < 0)
		{
			Size = 0;
		}
		_Size = Size;
		OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int index, T value)
	{
		if (index > _Size || index < 0)
		{
			return false;
		}
		else
		{
			OriginalArray[index] = value;
		}
	}

	bool IsEmpty()
	{
		return (_Size == 0) ? true : false;
	}

	int Size()
	{
		return _Size;
	}

	void Print()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";

	}

};

