#include "Tree.h"
#include <iostream>

int main()
{
	Tree t;
	t.insert_new_chapter("Chapter 1");
	t.next_section();
	/*t.insert_new_paragraph("P 1");
	t.open_content();
	t.insert_new_article("A 1");*/
	cout << t.whole_tree_to_string() << endl;
	return 0;
}