#pragma once
#include "library.h"
template <typename T>
class List
{
private:
	class Node
	{
	public:
		T date;
		Node* nextPtr;
		Node(T date)
		{
			this->date = date;
			this->nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	Node * curPtr;
	size_t count;
public:
	List()
	{
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}
	void push_back(T date);
	void push_front(T date);
	void print();
	void removeFirst();
	void removeLast();
	bool find(T date);
	T & operator[](int index);
	size_t size() { return count; }
	virtual ~List();
};


