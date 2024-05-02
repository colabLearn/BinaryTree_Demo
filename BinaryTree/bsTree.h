#pragma once
#include "bNode.h"
class bsTree
{
private:
	bNode* root;
	void printNode(bNode* aNode);

public:
	bsTree();
	void printTree();
	
};

