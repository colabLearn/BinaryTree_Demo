#include "bsTree.h"
#include <iostream>

bsTree::bsTree()
	:root(nullptr) {}

void bsTree::printNode(bNode*& aNode)
{
	if (aNode == nullptr)
	{
		return;
	}
	
	std::cout << aNode->data<< " ";
	printNode(aNode->left);
	printNode(aNode->right);
	
}

void bsTree::insertNode(bNode*& aNode, int e)
{
	if (aNode == nullptr)
	{
		aNode = new bNode;
		aNode->data = e;
		aNode->left = nullptr;
		aNode->right = nullptr;
		return;
	}
	if (e < aNode->data)
	{
		insertNode(aNode->left, e);

	}
	else
	{
		insertNode(aNode->right, e);
	}
	
	
}
void bsTree::printTree()
{
	if (this->root == nullptr)
	{
		std::cout << "No data in tree!"<<std::endl;
		return;
	}
	else
	{
		printNode(this->root);
	}
	
}
void bsTree::insert(int e)
{
	insertNode(this->root, e);
}
