#include "Stack.h"

Stack::Stack(int _size)
{
	size = _size;
	ind = -1;
	mem = new Node*[size];
}
Stack::Stack(const Stack &st)
{
	ind = st.ind;
	size = st.size;
	for (int i = 0; i <= ind; i++)
	{
		mem[i] = st.mem[i];
	}
}
Node* Stack::Pop()
{
	ind--;
	return mem[ind + 1];
}
void Stack::Push(Node* p)
{
	ind = ind + 1;
	mem[ind] = p;
}