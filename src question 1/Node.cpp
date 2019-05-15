#include "Node.h"



Node::Node()
{
	data = 0;
	right = nullptr;
	left = nullptr;
}

Node::Node(int val){
	data = val;
	left = nullptr;
	right = nullptr;
}


Node::~Node()
{
	delete left;
	delete right;
}

int Node::getData()
{
	return data;
}

Node * Node::getleft()
{
	return left;
}

Node * Node::getright()
{
	return right;
}


void Node::setData(int val)
{
	data = val;
}

void Node::setleft(Node * ptr)
{
	left = ptr;
}
void Node::setright(Node * ptr)
{
	right = ptr;
}

