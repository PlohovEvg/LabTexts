#pragma once
#include "Node.h"

class Stack
{
	int size;
	int ind;
	Node **mem;
public:
	Stack(int _size = 100);
	Stack(const Stack &st);
	void Clear_Stack() { ind = -1; }
	~Stack() { delete[]mem; }
	bool IsEmpty() { return (ind == -1); }
	bool IsFull() { return (ind == size - 1); }
	Node* Pop();
	void Push(Node* p);
};
