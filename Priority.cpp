//#include <iostream>
//using namespace std;
//
//template<class P,class V>
//class Priority
//{
//
//private:
//	template<class U>
//	struct Node
//	{
//		int value;
//		Node*next;
//		Node(U value):value(value),next(nullptr)
//		{}
//	};
//
//	Node<P> *front;
//	Node<P> *rear;
//
//public:
//	Priority():front(nullptr),rear(nullptr)
//	{}
//
//	void push(P prio,V value)
//	{
//		Node<P,V> *newNode=new Node<P,V>(prio, value);
//		Node<P,V> *Back=nullptr;
//
//		for(Node<P,V> *current=front; current != nullptr || prio<=current->prio; current=current->next)
//		{
//			Back=current;
//		}
//		if(nullptr == front)
//		{
//			front=newNode;
//			return;
//		}
//
//		if(nullptr==current)
//		{
//			Back->next=newNode;
//			return;
//		}
//		newNode->next= current;
//			Back->next= newNode;
//		return;
//
//	}
//	void pop()
//	{
//
//	}
//};
//int main()
//{
//	float value,prio;
//	Priority<float,float> p;
//	while(cout<<"enter the priority and value",
//		cin>>prio,
//		cin>>value,
//		value)
//	{
//		p.push(prio,value);
//	}
//
//	return 0;
//}


#include <iostream>
using namespace std;

class Priority
{

private:
	struct Node
	{
		int value;
		int prio;
		Node*next;
		Node(int prio, int value):prio(prio), value(value), next(nullptr)
		{}
	};

	Node *front;
	Node *rear;
	int count;

public:
	Priority():front(nullptr),rear(nullptr),count(0)
	{}

	void Enqueue(int prio,int value)
	{
		count++;
		Node *newNode=new Node(prio, value);
		Node *Back=nullptr;
		//when entering first value 
		if(nullptr == front)
		{
			front=newNode;
			return;
		}
		
		for(Node *current=front; current!=nullptr || prio<=current->prio; current=current->next)
		{
		Back->next=newNode;
		newNode->next=front;
		front=newNode;
		break;
		}
		
		return;

	}
	int Dequeue()
	{
		Node *current=front;
		delete front;
		return current->value;

	}
	void display()
	{}
};
int main()
{
	int value,prio,r;
	char c;
	Priority p;

	while(cout<<"enter the value(0 to stop)"<<endl,
		cin>>value,
		cout<<"enter the priority"<<endl,
		cin>>prio,
		value)
	{
		
		p.Enqueue(prio,value);
		cout<<"do u want to remove last value(y/n)"<<endl;
		cin>>c;
		if(c=='y')
		{
	    r=p.Dequeue();
		cout<<r<<"is removed";
		}
	}
	p.display();
	return 0;
}