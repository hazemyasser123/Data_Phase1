#pragma once
#ifndef DEQUEUE_H
#define DEQUEUE_H

#include "LinkedQueue.h"
#include <iostream>
using namespace std;
template <typename T>
class DEQueue :public LinkedQueue<T>
{
public:
	DEQueue();
	bool dequeueback(T& backEntry);
	bool dequeueboth(T& backEntry, T& frntEntry);
	bool peekback(T& backEntry);
	bool peekboth(T& backEntry, T& frntEntry);
	~DEQueue();
	//copy constructor
	DEQueue(DEQueue<T>& LQ);
};
/////////////////////////////////////////////////////////////////////////////////////////

/*
Function: Queue()
The constructor of the Queue class.

*/

template <typename T>
DEQueue<T>::DEQueue() : LinkedQueue<T>()
{}

/////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////


template <typename T>
bool DEQueue<T>::dequeueback(T& backEntry)
{
	if (this->isEmpty())
		return false;
	LinkedQueue<T> y;
	T x,z;

	while (this->dequeue(x))
	{
		y.enqueue(x);
	}
	backEntry = x;
	while (y.dequeue(x))
	{
		if (backEntry != x)
		{
			this->enqueue(x);
		}
	}
	return true;
}

template <typename T>
bool DEQueue<T>::dequeueboth(T& backEntry, T& frntEntry)
{
	return (dedequeueback(backEntry) || this->dequeue(frntEntry));
}

/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool DEQueue<T>::peekback(T& backEntry)
{
	if (this->isEmpty())
		return false;
	LinkedQueue<T> y;
	T x;
	while (this->dequeue(x))
	{
		y.enqueue(x);
	}
	backEntry = x;
	while (y.dequeue(x))
	{
		this->enqueue(x);
	}
}

template <typename T>
bool DEQueue<T>::peekboth(T& backEntry, T&frntEntry)
{
	return(peekback(backEntry) || this->peek(frntEntry));
}

///////////////////////////////////////////////////////////////////////////////////

template <typename T>
DEQueue<T>::~DEQueue()
{
	//Free all nodes in the queue
	T temp;
	while (this->dequeue(temp));

}

/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
DEQueue<T>::DEQueue(DEQueue<T>& LQ)
{
	T x;
	while (this->dequeue(x))
	{}
	while (LQ.dequeue(x))
	{
		this->enqueue(x);
	}
}

#endif