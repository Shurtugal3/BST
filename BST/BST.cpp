#include "pch.h"
#include "BST.h"


BST::BST()
{
}


BST::~BST()
{
}

//public methods 
void BST::Insert(string input)
{
	if (rootNode != nullptr)
	{

	}
	else
	{
		cout << "Tree is Empty"; 
	}
}

//private methods 
void BST::_createRoot(string input) 
{
	this->rootNode = new Node(input); 
}