#include "Tree.h"
#include <iostream>

void Tree:: delete_current_section()
{
	if (cur == NULL)
	{
		return;
	}
	Node *del = cur;
	if (cur == root)
	{
		root = cur->l;
		cur = root;
		recurring_delete(del->r);
		delete del;
		return;
	}
	else
	{
		Node *p = st.Pop();
		if (p->r == cur)
		{
			p->r = cur->l;
			cur = p;
			recurring_delete(del->r);
			delete del;
			return;
		}
		else
		{
			p->l = cur;
			cur = p;
			recurring_delete(del->r);
			delete del;
			return;
		}
	}
	
}
void Tree:: recurring_delete(Node *t)
{
	if (t == NULL)
	{
		return;
	}
	recurring_delete(t->l);
	recurring_delete(t->r);
	delete t;
}
void Tree::insert_new_chapter(string _str)
{
	if ((cur != NULL) && (cur->tn != 0))
	{
		return;
	}
	Node *p = new Node;
	p->l = NULL;
	p->r = NULL;
	p->str = _str;
	p->tn = 0;
	if (cur == NULL)
	{
		root = p;
		cur = p;
	}
	else
	{
		cur->l = p;
	}
} 
void Tree:: insert_new_paragraph(string _str)
{
	if ((cur->tn != 0) && (cur->tn != 1))
	{
		return;
	}
	Node *p = new Node;
	p->l = NULL;
	p->r = NULL;
	p->str = _str;
	p->tn = 1;
	if (cur->tn == 0)
	{
		cur->r = p;
	}
	else 
	{
		cur->l = p;
	}
}
void Tree::insert_new_article(string _str)
{
	if ((cur->tn != 1) && (cur->tn != 2))
	{
		return;
	}
	Node *p = new Node;
	p->l = NULL;
	p->r = NULL;
	p->str = _str;
	p->tn = 1;
	if (cur->tn == 1)
	{
		cur->r = p;
	}
	else
	{
		cur->l = p;
	}
}
string Tree::whole_tree_to_string()
{
	string res = "";
	Node *p = root;
	while (p != NULL)
	{
		if (p != cur)
		{
			res += p->str;
			res += "\n";
			res += paragraphs_to_string(p->r);
		}
		else
		{
			res += "*";
			res += p->str;
			res += "\n";
			res += paragraphs_to_string(p->r);
		}
		p = p->l;
	}
	return res;
}
string Tree::paragraphs_to_string(Node *t)
{
	if (t == NULL)
	{
		return "";
	}
	string res = "";
	Node *p = t;
	while (p != NULL)
	{
		if (p != cur)
		{
			res += "  ";
			res += p->str;
			res += "\n";
			res += articles_to_string(p->r);
		}
		else
		{
			res += "  ";
			res += "*";
			res += p->str;
			res += "\n";
			res += articles_to_string(p->r);
		}
		p = p->l;
	}
	return res;
}
string Tree::articles_to_string(Node *t)
{
	if (t == NULL)
	{
		return "";
	}
	string res = "";
	Node *p = t;
	while (p != NULL)
	{
		if (p != cur)
		{
			res += "    ";
			res += p->str;
			res += "\n";
		}
		else
		{
			res += "    ";
			res += "*";
			res += p->str;
			res += "\n";			
		}
		p = p->l;
	}
	return res;
}