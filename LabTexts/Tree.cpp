#include "Tree.h"
#include <iostream>

void Tree::insert_new_subsection(string _str)
{
	if (cur == NULL)
	{
		cout << "insert chapter first" << endl;
		return;
	}
	Node *p = new Node;
	p->l = NULL;
	p->r = NULL;
	p->str = _str;
	cur->r = p;
}
void Tree::insert_new_section(string _str)
{
	Node *p = new Node;
	p->l = NULL;
	p->r = NULL;
	p->str = _str;
	if (cur == NULL)
	{
		cur = root = p;
		return;
	}
	cur->l = p;
}
void Tree:: delete_current_section()
{
	if (cur == NULL)
	{
		cout << "nothing to delete" << endl;
		return;
	}
	Node *p = st.Pop();
	Node *del = cur;
	if ((cur->l == NULL) && (cur->r == NULL))
	{
		cur = p;
		delete del;
		return;
	}
	if (cur == root)
	{
		root = cur->l;
		cur = root;		
	}
}