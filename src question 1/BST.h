#pragma once
#include "Node.h"
class BST
{
	Node *root;
public:
	BST();
	~BST();

	void insert(int val);
	int minvalue(Node *root);
	int maxvalue(Node *root);
	bool search(int val);
	void display(Node *temp);
	int size(Node *root);
	void mirror(Node *root);
	int sum(Node *root);
	void printLeaf(Node *root);
	void remove(Node *root, int val);
	void inorder(Node *root);
	void postorder(Node *root);
	bool printlevel(Node *root, int level);
	void levelorder(Node *root);
	int height(Node *temp);
	void gst(Node *root, int *sum);
	void Tree(Node *root);
	Node* getroot();
};
