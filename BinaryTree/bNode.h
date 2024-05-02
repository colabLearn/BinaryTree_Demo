#pragma once
class bsTree;

class bNode
{
private:
	int data;
	bNode* left;
	bNode* right;
	
	friend class bsTree;
};

