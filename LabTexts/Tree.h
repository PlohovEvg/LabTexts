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
	void delete_current_section();
	void next_section() { st.Push(cur); cur = cur->l; }
	void open_content() { st.Push(cur); cur = cur->r; }
	void delete_content() { recurring_delete(cur->r); }
	void change_content(string _str) { cur->str = _str; }
	void return_to_root() { cur = root; st.Clear_Stack(); }
	void return_back(){ cur = st.Pop(); }
	string whole_tree_to_string();
	string paragraphs_to_string(Node *t);
	string articles_to_string(Node *t);
	void recurring_delete(Node *t);
	void insert_new_chapter(string _str);
	void insert_new_paragraph(string _str);
	void insert_new_article(string _str);
};