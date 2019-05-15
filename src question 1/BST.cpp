#include "BST.h"



BST::BST()
{
	root = nullptr;
}


BST::~BST()
{
	delete root;
}

void BST::insert(int val)
{
	{
		Node *myNode = new Node(val);
		if (root == nullptr) {
			root = myNode;
			cout << "\n\tValue inserted successfully.\n";
		}
		else
		{	
			Node *temp;
			temp = root;
			while (temp != nullptr)
			{
				if (val > temp->getData())
				{
					if (temp->getright() == nullptr)
					{
						temp->setright(myNode);
						cout << "Value inserted on right"<<endl;
						break;
					}
					else
					{
						temp = temp->getright();
					}
				}
				else if (val < temp->getData())
				{
					if (temp->getleft() == nullptr)
					{
						temp->setleft(myNode) ;
						cout << "Value inserted on left"<<endl;
						break;
					}
					else
					{
						temp = temp->getleft();
					}
				}
				else
				{
					temp = temp->getleft();
				}
			}
		}
	}

}

void BST::display(Node *temp)
{
	if (temp == nullptr)
	{
		return ;
	}
	display(temp->getleft ());
	cout<<temp->getData();
	display(temp->getright());
}


int BST::minvalue(Node *root)
{
	if (root = nullptr)
	{
		cout << "The tree is empty";
	}
	else
	{
		int result;
		result = root->getData();
		int LeftSide= minvalue(root->getleft());
		int RightSide = minvalue(root->getright());
		if (LeftSide < result)
		{
			result = LeftSide;
		}
		if (RightSide < result)
		{
			result = RightSide;
		}
		return result;
	}

}
int BST::size(Node *root)
{
	if (root == nullptr)
	{
		return 0;
	}
	else
	{
		return(size(root->getleft() + 1 + size(root->getright())));
	}
}
void BST::mirror(Node *root)
{
	if (root == nullptr)
	{
		return;
	}
	else
	{
		Node *temp;
		temp = root;

		mirror(temp->getleft());
		mirror(temp->getright());

		temp = temp->getleft();
		temp->getleft = temp->getright;
		temp->getright = temp;
	}
}
int BST::sum(Node *root)
{
	if (root == nullptr)
		return 0;
	else
		return(root->getData + sum(root->getleft) + sum(root->getright));
}
void BST::printLeaf(Node *root)
{
	if (root == nullptr)
		return;
	if ((root->getleft == NULL) && (root->getright == NULL) )
		cout << root->getData;

	if (root->getleft)
		printLeaf(root->getleft);
	if (root->getright)
		printLeaf(root->getright);
}

int BST::maxvalue(Node *root)
{
	if (root = nullptr)
	{
		cout << "The tree is empty";
	}
	else
	{
		int result;
		result = root->getData();
		int LeftSide = maxvalue(root->getleft());
		int RightSide = maxvalue(root->getright());
		if (LeftSide > result)
		{
			result = LeftSide;
		}
		if (RightSide > result)
		{
			result = RightSide;
		}
		return result;
	}

}
void BST::remove(Node *root, int val)
{
	if (root == nullptr)
		return;
	if (data < root->getData )
	{
		root->getleft = remove(root->getleft, val);
	}
	else if (data > root->getData)
	{
		root->getleft = remove(root->getright, val);
	}

	else
	{
		//root have no child
		if (root->getleft == nullptr&&root->getright == nullptr)
		{
			delete root;
			root = nullptr;
		}
		// One Child
		else if (root->getleft == nullptr)
		{
			Node *temp;
			temp = root;
			root = root->getright;
			delete temp;
		}
		else if (root->getright == nullptr)
		{
			Node *temp;
			temp = root;
			root = root->getleft;
			delete temp;
		}
		// Two Child
		else
		{
			Node *temp;
			temp = minvalue(root->getright);
			root->getData = temp->getData;
			root->getright = delete(root->getright, temp->getData);

		}
	}
}
void BST::inorder(Node *root)
{
	if (root == nullptr)
		return;
	inorder(root->getleft);
	cout << root->getData;
	inorder(root->getright);
}
void BST::postorder(Node *root)
{
	if (root == nullptr)
		return;
	postorder(root->getleft);
	postorder(root->getright);
	cout << root->getData;
}
int BST::height(Node *temp)
{
	if (root == nullptr)
		return 0;
	else
	{
		int L = height(temp->getleft);
		int R = height(temp->getright);
		
		if (L > R)
			return(L + 1);
		else
			return (R + 1);
	}
}
bool BST::printlevel(Node *root, int level)
{
	if (root == nullptr)
	{
		return false;
	}
	if (level == 1)
	{
		cout << root->getData;

		return true;
	}
	bool left = printlevel(root->getleft, level - 1);
	bool right = printlevel(root->getright, level - 1);

	return left || right;
}
void BST::levelorder(Node *root)
{
	int level = 1;

	while (printlevel(root, level))
	{
		level++;
	}
}
void BST::gst(Node *root, int *sum)
{
	if (root == nullptr)
		return ;
	gst(root->getright, sum);
	*sum = *sum + root->getData;

	root->getData = *sum - root->getData;
	gst(root->getleft, sum);
}
void BST::Tree(Node *root)
{
	int sum = 0;
	gst(root, &sum);
}
bool BST::search(int val)
{
	
	if (root == nullptr)
	{
		return 0;
	}
	else
	{
		Node *temp;
		temp = root;
		while (root != nullptr)
		{
			if (val > temp->getData())
			{
				temp = temp->getright();
			}
			else if (val < temp->getData())
			{
				temp = temp->getleft();
			}
			else
			{
				return 1;
			}
		}
	}
}


Node* BST::getroot()
{
	return root;
}