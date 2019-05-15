
#pragma once
#include <iostream>
using namespace std;
class Node
{
	int data;
	Node *left;
	Node *right;
public:
	Node();
	Node(int val);

	~Node();

	int getData();
	Node *getleft();
	Node *getright();

	void setData(int val);
	void setleft(Node *ptr);
	void setright(Node *ptr);
};