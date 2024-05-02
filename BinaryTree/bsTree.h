#pragma once
#include "bNode.h"
class bsTree
{
private:
	bNode* root;
	void printNode(bNode*& aNode);
	void insertNode(bNode*& aNode, int e);

public:
	bsTree();
	void printTree();
	void insert(int e);
	
};

