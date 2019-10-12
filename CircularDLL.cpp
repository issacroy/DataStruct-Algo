#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node*next;
	Node *prev;
	Node(int value)
	{
		this->value=value;
		this->next=nullptr;
		this->prev=nullptr;
	}
};

class Circular
{
private:
	Node *head;
	Node *tail;

public:
	Circular()
	{
	  head = new Node(0);
	  tail = new Node(0);
	  head->prev=tail;
	  tail->next=head;
	}
	void addToFront(int value)
	{
	 Node *newNode= new Node(value);
	 head->next=newNode;

	}

	void porinTForward()
	{
	}
};

int main()
{

return 0;
}