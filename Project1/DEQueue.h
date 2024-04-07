#pragma once
#ifndef DEQUEUE_H
#define DEQUEUE_H

#include "QueueADT.h"
#include <iostream>
using namespace std;
template <typename T>
class DEQueue :public QueueADT<T>
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	DEQueue();
	bool isEmpty() const;
	bool enqueue(const T& newEntry);
	bool dequeue(T& frntEntry);
	bool dequeueback(T& backEntry);
	bool dequeueboth(T& backEntry, T& frntEntry) const;
	bool peek(T& frntEntry)  const;
	bool peekback(T& backEntry) const;
	bool peekboth(T& backEntry, T& frntEntry) const;
	~DEQueue();
	//copy constructor
	DEQueue(const DEQueue<T>& LQ);
};
/////////////////////////////////////////////////////////////////////////////////////////

/*
Function: Queue()
The constructor of the Queue class.

*/

template <typename T>
DEQueue<T>::DEQueue()
{
	backPtr = nullptr;
	frontPtr = nullptr;

}
/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool DEQueue<T>::isEmpty() const
{
	return (frontPtr == nullptr);
}

/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool DEQueue<T>::enqueue(const T& newEntry)
{
	Node<T>* newNodePtr = new Node<T>(newEntry);
	// Insert the new node
	if (isEmpty())	//special case if this is the first node to insert
		frontPtr = newNodePtr; // The queue is empty
	else
		backPtr->setNext(newNodePtr); // The queue was not empty

	backPtr = newNodePtr; // New node is the last node now
	return true;
} // end enqueue


/////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>		
bool DEQueue<T>::dequeue(T& frntEntry)
{
	if (isEmpty())
		return false;

	Node<T>* nodeToDeletePtr = frontPtr;
	frntEntry = frontPtr->getItem();
	frontPtr = frontPtr->getNext();
	// Queue is not empty; remove front
	if (nodeToDeletePtr == backPtr)	 // Special case: last node in the queue
		backPtr = nullptr;

	// Free memory reserved for the dequeued node
	delete nodeToDeletePtr;

	return true;

}


template <typename T>
bool DEQueue<T>::dequeueback(T& backEntry)
{
	if (isEmpty())
		return false;

	Node<T>* nodeToDeletePtr = frontPtr;
	backEntry = frontPtr->getItem();
	backPtr = frontPtr->getNext();
	// Queue is not empty; remove front
	if (nodeToDeletePtr == backPtr)	 // Special case: last node in the queue
		backPtr = nullptr;

	// Free memory reserved for the dequeued node
	delete nodeToDeletePtr;

	return true;

}

template <typename T>
bool DEQueue<T>::dequeueboth(T& backEntry, T& frntEntry) const
{
	return (dedequeueback(backEntry) || dequeue(frntEntry));
}

/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool DEQueue<T>::peek(T& frntEntry) const
{
	if (isEmpty())
		return false;

	frntEntry = frontPtr->getItem();
	return true;

}

template <typename T>
bool DEQueue<T>::peekback(T& backEntry) const
{
	if (isEmpty())
		return false;

	backEntry = backPtr->getItem();
	return true;

}

template <typename T>
bool DEQueue<T>::peekboth(T& backEntry, T&frntEntry) const
{
	peekback(backEntry);
	peek(frntEntry);
	return(peekback(backEntry) || peek(frntEntry));
}

///////////////////////////////////////////////////////////////////////////////////

template <typename T>
DEQueue<T>::~DEQueue()
{
	//Free all nodes in the queue
	T temp;
	while (dequeue(temp));
}
/////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
DEQueue<T>::DEQueue(const DEQueue<T>& LQ)
{
	frontPtr = backPtr = nullptr;
	Node<T>* NodePtr = LQ.frontPtr;	//start at the front node in LQ
	while (NodePtr)
	{
		enqueue(NodePtr->getItem());	//get data of each node and enqueue it in this queue 
		NodePtr = NodePtr->getNext();
	}
}

#endif