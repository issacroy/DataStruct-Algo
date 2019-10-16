#include <iostream>
#include <iomanip>
using namespace std;
class Avl
{
private:
	struct Node
	{
		int value;
		Node *left;
		Node *right;
		Node(int value):value(value),left(nullptr),right(nullptr)
		{}
	};

	Node *root;
	Avl():root(nullptr)
	{}

	Node *add(Node *node,int value)
	{
		if(nullptr==node)
			return new Node(value);
		if(value>node->value)
			node->right =add(node->right, value);
		else
			node->left=add(node->left,value);
		node=Rebalance(node);
		return node;
	}
	void Inorder(Node*node)
	{
		if(node)
		{
			Inorder(node->left);
			cout<<node->value<<"\t";
			Inorder(node->right);
		}
	}

	Node *Remove(Node *node, int value)
	{
		if (value > node->value)
			node->right=Remove(node->right,value);
		else if(value < node->value)
			node->left=Remove(node->left,value);
		else{
			if(nullptr == node->left && nullptr == node->right)
			{
				delete node;
				return nullptr;
			}
			if(nullptr!=node->left && nullptr==node->right)
			{
				Node *orphan=node->left;
				delete node;
				return orphan;
			}
			if(nullptr ==node->left && nullptr !=node->right)
			{
				Node *orphan=node->right;
				delete node;
				return orphan;
			}

			Node *successor = node->right;
			while(nullptr!=successor->left)
				successor=successor->left;

			node->value = successor->value;
			node->right = Remove(node->right,value);
			node=Rebalance(node);
		}
		return node;
	}


	void printDebug(Node*node)
	{
		static int level=0;
		if(node)
		{
			level++;
			printDebug(node->right);
			cout<<setw(level*4)<<" "<<node->value<<endl;
			printDebug(node->left);
			level--;
		}
	}

	int height(Node *node)
	{
		if(nullptr == node)
			return 0;
		int leftheight = height(node->left);
		int rightheight = height(node->right);
		int h = max(leftheight,rightheight);
		return h+1;
	}
	int balance(Node *node)
	{
		if(node)
			return height(node->right)-(node->left);
		else
			return 0;
	}

	Node *RotateLeft(Node *node)
	{
		Node *child = node->right;
		Node *grandchild = child->left;
		node->right=grandchild;
		child->left=node;
		return child;
	}

	Node *RotateRight(Node *node)
	{
		Node *child = node->left;
		Node *grandchild = child->right;
		node->left = grandchild;
		grandchild->right = node;
		return child;
	}

	Node *RotateRightLeft(Node *node)
	{
		Node *child=node->right;
		Node *grandchild=child->left;
		child->right=node;
		return child;
	}

	Node *RotateLeftRight(Node *node)
	{
		Node *child = node->left;
		Node *grandchild = child->left;
		child->right=node;
		return child;
	}
	Node *Rebalance(Node *node)
	{
		int nodeBalance = balance(node);
		if (nodeBalance == +2)
		{
			int childBalance = balance(node->right);
			if (childBalance == +1)
				node = RotateLeft(node);
			else
				node = RotateRightLeft(node);
		}
		else if (nodeBalance == -2)
		{
			int childBalance = balance(node->left);
			if(childBalance == -1)
				node = RotateRight(node);
			else
				node = RotateLeftRight(node);
		}
		return node;

	}
public:
	Avl():root(nullptr)
	{}
	void Addnode(Node *node,int value)
	{
		root=add(root,value);
	}
	void dele(int value)
	{
		root=Remove(root,value);
	}
	void Print(Node *node)
	{
		printDebug(root);
	}
};


int main()
{
	Avl B;
	int value,n;
	B.root=nullptr;
	while(cout<<"enter the value (0 to stop)",
		cin>>value,
		value!=0)
	{
		B.root=B.dele(value);
		B.Print(B.root);
	}
	while(cout<<"enter the value  to remove(0 to stop)",
		cin>>n,
		n!=0)
	{
		B.root=B.dele(n);
		B.Print(B.root);
	}
	return 0;
}