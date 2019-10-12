//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int value;
//	Node*next;
//	Node*prev;
//	Node(int value)
//	{
//		this->value=value;
//		this->next=nullptr;
//		this->prev=nullptr;
//	}
//
//};
//
//
//class Doublelinklist
//{
//private:
//	Node*head;
//	Node*tail;
//public:
//	Doublelinklist()
//	{
//		head=nullptr;
//		tail=nullptr;
//	}
//
//
//	void Printforward()
//	{
//		Node*current;
//		for(current=head;current!=nullptr;current=current->next)
//		{
//			cout<<current->value<<"\t";
//		}
//		cout<<endl;
//	}
//
//
//	void PrintBackward()
//	{
//		Node*current;
//		for(current=tail;current!=nullptr;current=current->prev)
//		{
//			cout<<current->value<<"\t";
//		}
//	}
//
//
//	void AddtoBack(int value)
//	{
//		Node*newnode=new Node(value);
//		if(nullptr==head)
//			head=newnode;
//		else
//		{
//			tail->next=newnode;
//			newnode->prev=tail;
//		}
//		tail=newnode;
//	}
//
//	void AddtoFront(int value)
//	{
//		Node*newnode=new Node(value);
//		if(nullptr==head)
//			tail=newnode;
//		else
//		{
//			newnode->next=head;
//			head->prev=newnode;
//		}
//		head=newnode;
//	}
//
//	int RemoveAll()
//	{
//	 Node*temp;
//	 int count=0;
//	 while(head!=nullptr)
//	 {
//		 temp=head;
//		 head=head->next;
//		 delete temp;
//		 count++;
//	 }
//	 tail=nullptr;
//	 return count;
//	}
//};
//
//int main()
//{
//	int num;
//	Doublelinklist d;
//	while(cout<<"enter the numbers (0 to stop)",
//		cin>>num,
//		num!=0)
//	{
//		d.AddtoBack(num);
//	}
//	d.Printforward();
//	d.PrintBackward();
//	cout<<endl<<"No.of elements removed ="<<d.RemoveAll()<<endl;
//	return 0;
//}