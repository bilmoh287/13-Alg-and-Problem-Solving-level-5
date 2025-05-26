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


};

