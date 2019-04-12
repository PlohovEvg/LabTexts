#include "Stack.h"

Stack1::Stack1(int _size)
{
	size = _size;
	ind = -1;
	mem = new Node*[size];
}
Stack1::Stack1(const Stack1 &st)
{
	ind = st.ind;
	size = st.size;
	for (int i = 0; i <= ind; i++)
	{
		mem[i] = st.mem[i];
	}
}
Node* Stack1::Pop()
{
	ind--;
	return mem[ind + 1];
}
void Stack1::Push(Node* p)
{
	ind = ind + 1;
	mem[ind] = p;
}