#include"BST.h"



void printmenu();
int main()
{
	BST bintree;
	bintree.insert(4);
	bintree.insert(16);
	bintree.insert(2);
	bintree.insert(25);

	int choose;
	cout << "choose the option";
	cin >> choose;
	switch (choose)	
	{
	case 1:
		cout << "\n\n\nMinimum value in the list" << bintree.minvalue(bintree.getroot());
		break;
	case 2:
		cout << "\n\n\nMaximum value in the list" << bintree.maxvalue(bintree.getroot());
		break;
	case 3:
		if (bintree.search(25))
		{
			cout << "\n\n Valuue Found";
		}
		else
		{
			cout << "\n\n Value not found";
		}
		break;
	case 4:
		bintree.display(bintree.getroot());
		break;
	case 5:
		cout << bintree.size(bintree.getroot());
		break;
	case 6:
		cout << bintree.mirror(bintree.getroot());
		break;
	case 7:
		cout << bintree.sum(bintree.getroot());
		break;
	case 8:
		cout << bintree.printLeaf(bintree.getroot());
		break;
	case 9:
		cout << bintree.remove(bintree.getroot(), 24);
		break;
	case 10:
		cout << bintree.inorder(bintree.getroot());
		break;
	case 11:

		break;
	default:
		break;
	}

	

	
	
	
	
	cout << "\n\n\n\n\n";
	system("pause");
}


void printmenu()
{
	
		cout << endl;
		cout << "\n\t\t1-	Insert a value ";
		cout << "\n\t\t2-	Min value";
		cout << "\n\t\t3-	Max value";
		cout << "\n\t\t4-	Search value";
		cout << "\n\t\t5-	display value";
		cout << "\n\t\t6-	Size of tree";
		cout << "\n\t\t7-	Mirror of tree";
		cout << "\n\t\t8-	diplay Leaf";
		cout << "\n\t\t9-	Sum of tree";
		cout << "\n\t\t10-	Max value";
		cout << "\n\t\t11-	remove node from tree";
		cout << "\n\t\t12-	Max value";
		cout << "\n\t\t13-	Inorder value";
		cout << "\n\t\t14-	Post order";
		cout << "\n\t\t15-	Print level";
		cout << "\n\t\t16-	Level Order";
		cout << "\n\t\t17-	Height of the tree";
		cout << "\n\t\t18-	Greater Sum Tree";

		cout << "\n\t\t4-	Exit";
		cout << "\n\n\t\t\tSelect :";
}