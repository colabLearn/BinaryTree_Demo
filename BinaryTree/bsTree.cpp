#include "bsTree.h"
#include <iostream>

bsTree::bsTree()
	:root(nullptr) {}

void bsTree::printNode(bNode* aNode)
{
	if (aNode == nullptr)
	{
		std::cout << "No data in tree!";
		return;
	}
	bNode* temp = aNode;
	std::cout << temp->data;
	printNode(temp->left);
	printNode(temp->right);
}
void bsTree::printTree()
{
	printNode(this->root);
}
