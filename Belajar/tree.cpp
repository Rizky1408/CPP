#include <iostream>
#include <cstdlib>
using namespace std;

class BinarySearchTree
{
private:
	struct nodeTree
	{
		nodeTree* left;
		nodeTree* right;
		int data;
	};
	nodeTree* root;

public:
	BinarySearchTree()
	{
		root = NULL;
	}

	bool isEmpty() const { return root==NULL; }
	void print_inorder();
	void inorder(nodeTree*);
	void print_preorder();
	void preorder(nodeTree*);
	void print_postorder();
	void postorder(nodeTree*);
	void insert(int);
	void remove(int);
};

void BinarySearchTree::insert(int d)
{
	nodeTree* t = new nodeTree;
	nodeTree* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;

	if(isEmpty()) root = t;
	else
	{

		nodeTree* current;
		current = root;

		while(current)
		{
			parent = current;
			if(t->data > current->data) current = current->right;
			else current = current->left;
		}

		if(t->data < parent->data)
			parent->left = t;
		else
			parent->right = t;
	}
}

void BinarySearchTree::remove(int d)
{
//Locate the element
	bool found = false;
	if(isEmpty())
	{
		cout<<" This Tree is empty! "<<endl;
		return;
	}

	nodeTree* current;
	nodeTree* parent;
	current = root;

	while(current != NULL)
	{
		if(current->data == d)
		{
			found = true;
			break;
		}
		else
		{
			parent = current;
			if(d>current->data) current = current->right;
			else current = current->left;
		}
	}
	if(!found)
	{
		cout<<" Data not found! "<<endl;
		return;
	}

// Node dengan single child
	if((current->left == NULL && current->right != NULL)|| (current->left != NULL
		&& current->right == NULL))
	{
		if(current->left == NULL && current->right != NULL)
		{
			if(parent->left == current)
			{
				parent->left = current->right;
				delete current;
			}
			else
			{
				parent->right = current->right;
				delete current;
			}
		}
		else
		{
			if(parent->left == current)
			{
				parent->left = current->left;
				delete current;
			}
			else
			{
				parent->right = current->left;
				delete current;
			}
		}
		return;
	}

// node tidak mempunyai child node
	if( current->left == NULL && current->right == NULL)
	{
		if(parent->left == current ) parent->left = NULL;
		else parent->right = NULL;
		delete current;
		return;
	}

//Node dengan 2 child node
// ganti node dengan nilai terkecil di subtree bagain kanan
	if (current->left != NULL && current->right != NULL)
	{
		nodeTree* temp;
		temp = current->right;
		if((temp->left == NULL) && (temp->right == NULL))
		{
			current = temp;
			delete temp;
			current->right = NULL;
		}
		else
		{

			if((current->right)->left != NULL)
			{
				nodeTree* lcurrent;
				nodeTree* lcurrp;
				lcurrp = current->right;
				lcurrent = (current->right)->left;
				while(lcurrent->left != NULL)
				{
					lcurrp = lcurrent;
					lcurrent = lcurrent->left;
				}
				current->data = lcurrent->data;
				delete lcurrent;
				lcurrp->left = NULL;
			}
			else
			{
				nodeTree* tmp2;
				tmp2 = current->right;
				current->data = tmp2->data;
				current->right = tmp2->right;
				delete tmp2;
			}

		}
		return;
	}

}

void BinarySearchTree::print_inorder()
{
	inorder(root);
}

void BinarySearchTree::inorder(nodeTree* p)
{
	if(p != NULL)
	{
		if(p->left) inorder(p->left);
		cout<<" "<<p->data<<" ";
		if(p->right) inorder(p->right);
	}
	else return;
}

void BinarySearchTree::print_preorder()
{
	preorder(root);
}

void BinarySearchTree::preorder(nodeTree* p)
{
	if(p != NULL)
	{
		cout<<" "<<p->data<<" ";
		if(p->left) preorder(p->left);
		if(p->right) preorder(p->right);
	}
	else return;
}

void BinarySearchTree::print_postorder()
{
	postorder(root);
}

void BinarySearchTree::postorder(nodeTree* p)
{
	if(p != NULL)
	{
		if(p->left) postorder(p->left);
		if(p->right) postorder(p->right);
		cout<<" "<<p->data<<" ";
	}
	else return;
}

int main()
{
	BinarySearchTree b;
	int ch,tmp,tmp1;
	while(1)
	{
		cout<<endl<<endl;
		cout<<" Binary Search Tree Operations "<<endl;
		cout<<" ----------------------------- "<<endl;
		cout<<" 1. Masukan/Buat data "<<endl;
		cout<<" 2. In-Order Traversal "<<endl;
		cout<<" 3. Pre-Order Traversal "<<endl;
		cout<<" 4. Post-Order Traversal "<<endl;
		cout<<" 5. Hapus Data "<<endl;
		cout<<" 6. Exit "<<endl;
		cout<<" Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<" Enter Number to be inserted : ";
			cin>>tmp;
			b.insert(tmp);
			break;
			case 2 : cout<<endl;
			cout<<" In-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_inorder();
			break;
			case 3 : cout<<endl;
			cout<<" Pre-Order Traversal "<<endl;
			cout<<" -------------------"<<endl;
			b.print_preorder();
			break;
			case 4 : cout<<endl;
			cout<<" Post-Order Traversal "<<endl;
			cout<<" --------------------"<<endl;
			b.print_postorder();
			break;
			case 5 : cout<<" Enter data to be deleted : ";
			cin>>tmp1;
			b.remove(tmp1);
			break;
			case 6 :
			return 0;

		}
	}
}