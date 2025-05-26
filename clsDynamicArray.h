#pragma once

#include<iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;
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
		if (index >= _Size || index < 0)
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

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";

	}

	//bool Resize(int Size)
	//{
	//	if (Size < 0)
	//	{
	//		return false;
	//	}
	//	else
	//	{
	//		T* tempArray;

	//		tempArray = new T[Size];
	//		for (int i = 0; i < Size; i++)
	//		{
	//			if (i <= _Size)
	//			{
	//				tempArray[i] = OriginalArray[i];
	//			}
	//		}

	//		_Size = Size;
	//		delete[] OriginalArray;
	//		OriginalArray = tempArray;
	//		return true;
	//	}
	//}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		}

		if (NewSize < _Size)
		{
			_Size = NewSize;
		}

		_TempArray = new T[NewSize];

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}

	T GetItem(int index)
	{
		if (index >= _Size || index < 0)
		{
			return T(); // Return default value (0 for int, nullptr for pointers, etc.)
		}
		return OriginalArray[index];
	}

	void Reverse()
	{
		if (_Size <= 1)
		{
			return;
		}

		_TempArray = new T[_Size];
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[_Size - 1 - i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;

		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
		{
			return false;
		}

		if(_Size == 1)
		{
			Clear();
			return true;
		}

		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; ++i)
		{
			_TempArray[i] = OriginalArray[i];
		}

		for (int i = index; i <_Size-1; i++)
		{
			_TempArray[i] = OriginalArray[i + 1];
		}

		_Size--;
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem() 
	{
		DeleteItemAt(_Size - 1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == value)
				return i;
		
		}
		return -1;
	}

	void DeleteItem(T value)
	{
		//int index = Find(value);
		//if (index == -1)
		//{
		//	return false;
		//}

		//DeleteItemAt(index);
		//return true;

		DeleteItemAt(Find(value));
	}

	bool InsertAt(int index, T value)
	{
		if (index > _Size || index < 0)
		{
			return false;
		}

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];

		}

		_TempArray[index] = value;

		for (int i = index; i <= _Size; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];

		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;

	}


	void InsertAtBeginning(T value)
	{
		InsertAt(0, value);
	}

	bool InsertAfter(int index, T value)
	{
		if (index >= _Size)
			return InsertAt(_Size - 1, value);
		else
			return InsertAt(index + 1, value);
	}

	bool InsertBefore(int index, T value)
	{
		if (index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(index-1, value);
	}

	bool InsertAtEnd(T value)
	{
		return InsertAt(_Size, value);
	}
};

