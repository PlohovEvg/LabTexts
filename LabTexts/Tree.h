#pragma once
#include "Node.h"
#include "Stack.h"


class Tree
{
	Node *root;
	Node *cur;
	Stack st;
public:
	Tree() { root = NULL; cur = root; }
	void insert_new_subsection(string _str);
	void insert_new_section(string _str);
	void delete_current_section();
	void next_section() { st.Push(cur); cur = cur->l; }
	void open_content() { st.Push(cur); cur = cur->r; }
	void delete_content() { cur->str = ""; }
	void change_content(string _str) { cur->str = _str; }
	void return_to_root() { cur = root; st.Clear_Stack(); }
	void return_back(){ cur = st.Pop(); }
	void show_tree();
};