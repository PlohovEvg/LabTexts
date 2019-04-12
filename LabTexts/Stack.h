#pragma once
#include "Tree.h"
struct Node;
class Stack1
{
	int size;
	int ind;
	Node **mem;
public:
	Stack1(int _size = 50);
	Stack1(const Stack1 &st);
	~Stack1() { delete[]mem; }
	bool IsEmpty() { return (ind == -1); }
	bool IsFull() { return (ind == size - 1); }
	Node* Pop();
	void Push(Node* p);
};
