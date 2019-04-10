#pragma once
#include <string>

using namespace std;

struct Node
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
	void move_left() { cur = cur->l; }
	void move_right() { cur = cur->r; }
	void delete_content() { cur->str = ""; }
	void change_content(string _str) { cur->str = _str; }
	void retrun_to_root() { cur = root; }
	void return_back();
	void next_section();
};