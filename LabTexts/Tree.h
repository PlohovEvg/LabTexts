#pragma once
#include <string>
#include "Stack.h"

using namespace std;

struct Node       //Node ג מעהוכüםûי פאיכ
{
	string str;
	Node *l, *r;
};

class Tree
{
	Node *root;
	Node *cur;
public:
	Tree() { root = NULL; cur = root; }
	void insert_new_chapter(string _str);
	void insert_new_paragraph(string _str);
	void insert_new_article(string _str);
	void delete_current_section();
	void next_section() { cur = cur->l; }
	void open_content() { cur = cur->r; }
	void delete_content() { cur->str = ""; }
	void change_content(string _str) { cur->str = _str; }
	void return_to_root() { cur = root; }
	void return_back();
};