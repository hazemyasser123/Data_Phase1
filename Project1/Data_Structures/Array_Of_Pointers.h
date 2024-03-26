#pragma once
#include <iostream>
using namespace std;

#define DefSize 100

template <class T, int size = DefSize>
class Array_Of_Pointers
{
private:
	T items[size];
	int count;
public:
	Array_Of_Pointers();
	bool insert(T data);
	void PrintAll();
	bool Delete(int index);
	void clear();
	T operator[](int index)
	{
		if (index < count)
		{
			return items[index];
		}
		else
		{
			return NULL;
		}
	}
};

template<class T, int size>
inline Array_Of_Pointers<T, size>::Array_Of_Pointers()
{
	//items = new T[size];

	for (int i = 0; i < size; i++)
	{
		items[i] = NULL;
	}
	count = 0;
}

template<class T, int size>
inline bool Array_Of_Pointers<T, size>::insert(T data)
{
	if (count == size)
	{
		return false;
	}
	else
	{
		items[count] = data;
		count++;
		return true;
	}
}

template<class T, int size>
inline void Array_Of_Pointers<T, size>::PrintAll()
{
	cout << "[";
	for (int i = 0; i < count; i++)
	{
		if (i != count - 1)
		{
			cout << items[i] << ", ";
		}
		else
		{
			cout << items[i];
		}
	}
	cout << "]" << endl;;
}

template<class T, int size>
inline bool Array_Of_Pointers<T, size>::Delete(int index)
{
	if (index < count)
	{
		items[index] = items[count - 1];
		items[count - 1] = NULL;
		count--;
		return true;
	}
	else
	{
		return false;
	}
}

template<class T, int size>
inline void Array_Of_Pointers<T, size>::clear()
{
	for (int i = 0; i < count; i++)
	{
		items[i] = NULL;
	}
	count = 0;

}




