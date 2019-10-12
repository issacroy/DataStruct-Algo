#include <iostream>
using namespace std;
struct Node
{
	int value;
	Node*next;
	Node*prev;

	Node(int value)
	{
		this->value=value;
		this->next=nullptr;
		this->prev=nullptr;
	}
};

class Sentinel
{
private:
	Node *head;
	Node *tail;
public:
	Sentinel()
	{
		head =new Node(0);
		tail =new Node(0);
		head->next=tail;
		tail->prev=head;
	}
	//void addToFront(int value)
	//{
	//	
	//	Node *newNode1=new Node(value);
	//	newNode1->prev=head;
	//	newNode1->next=head->next;
	//	head->next->prev=newNode1;
	//	head->next=newNode1;
	//or
	//	/*head->next->prev=new Node(value);
	//	head->next->prev->prev=head;
	//	head->next->prev->next=head->next;
	//	head->next=head->next->prev;*/
	//}
	void addToBack(int value)
	{
		Node *newNode=new Node(value);
		newNode->next=tail;
		newNode->prev=tail->prev;
		tail->prev->next=newNode;
		tail->prev=newNode;
	}
	void printForward()
	{

		for(Node *current= head->next; current !=tail; current=current->next)
		{
			cout<<current->value<<'\t';
		}
		cout<<endl;
	}

	int RemoveAll()
	{
	int count=0;
	Node*temp;
	while(head!=nullptr)
	{
	temp = head;
	head=head->next;
	delete temp;
	count++;
	}
	tail=nullptr;
	return count;
	}
	
	bool Remove(int value)
	{

		for(Node *p=head->next;  p !=tail; p=p->next)
		{
			if(p->value == value)
			{
				p->prev->next = p->next;
				p->next->prev = p->prev;
				delete p;
				return true;
			}
		}
		return false;
	}
};

int main()
{
	Sentinel s;
	int num, r;
	while(cout<<"Enter the number(0 to stop)",
		cin>>num,
		num)
	{
		s.addToBack(num);
		//s.addToFront(num);
	}
	s.printForward();
	
	cout<<"enter the number u need to remove"<<endl;
	cin>>r;
	s.Remove(r);
	s.printForward();
	cout<<endl<<"No.of nodes removed "<<s.RemoveAll()<<endl;
	return 0;
}
