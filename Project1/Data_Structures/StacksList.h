#pragma once
#include <iostream>
#include "Node.h"
template <class T>
class StacksList
{
	Node<T>* head;
public:
	StacksList()
	{
		head = nullptr;
	}

	bool isEmpty() const
	{
		if (head)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool push(const T& newEntry)
	{
		if (!head)
		{
			head = newEntry;
		}
		else
		{
			Node<T>* ptr = head;
			while (ptr->getnext())
			{
				ptr = ptr->getNext();
			}
			Node<T> p = new Node(newEntry);
			ptr->setNext(p);
		}
		return true;
	}

	bool pop(T& TopEntry)
	{
		if (!head)
		{
			return false
		}
		else
		{
			Node<T>* ptr = head;
			TopEntry = ptr->getItem();
			head = ptr->getNext();
			return true;
		}
	}

	bool peek(T& TopEntry) const
	{
		if (!head)
		{
			return false
		}
		else
		{
			TopEntry = head->getItem();
			return true;
		}
	}

	void printStack()
	{
		cout << "The elements from top are ";
		Node<T>* ptr = head;
		while (ptr)
		{
			cout << ptr->getItem() << " ";
			ptr = ptr->getNext();
		}
		cout << endl;
	}
	~StacksList()
	{

	}
};