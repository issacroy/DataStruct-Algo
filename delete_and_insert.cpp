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
//		Node*temp;
//		int count=0;
//		while(head!=nullptr)
//		{
//			temp=head;
//			head=head->next;
//			delete temp;
//			count++;
//		}
//		tail=nullptr;
//		return count;
//	}
//
//	bool DeleteInsert(int value)
//	{
//		Node*p;
//		for(p=head;p;p=p->next)
//		{
//			if(p->value==value)
//			{
//
//				if(p==head && p==tail)
//				{
//					delete p;
//					head=nullptr;
//					tail=nullptr;
//					return 1;
//				}
//				if(p==head)
//				{
//					/*cout<<"head value"<<head->value<<endl;
//					cout<<"p value"<<p->value<<endl;*/
//					head=p->next;
//					head->prev->next=nullptr;
//					head->prev=nullptr;
//					delete p;
//					return 2;
//				}
//				if(p==tail)
//				{
//					tail=tail->prev;
//					tail->next->prev=nullptr;
//					tail->next=nullptr;
//					delete p;
//					return 3;
//
//				}
//
//				p->next->prev=p->prev;
//				p->prev->next=p->next;
//				delete p;
//				return 4;
//			}
//
//
//		}
//		return 0;
//	}
//
//	//bool DeleteInsert(int value)
//	//{
//	//	Node*p=head;
//	//	while(p)
//	//	{
//
//	//		if(p->value==value)
//	//		{
//	//			if(p==head && p==tail)
//	//			{
//
//	//				head=nullptr;
//	//				tail=nullptr;
//	//				delete p;
//	//				return 1;
//	//			}
//	//			if(p==head)
//	//			{
//	//				head=p->next;
//	//				head->prev->next=nullptr;
//	//				head->prev=nullptr;
//	//				delete p;
//	//				return 1;
//	//			}
//	//			if(p==tail)
//	//			{
//	//				tail=p->prev;
//	//				tail->next->prev=nullptr;
//	//				tail->next=nullptr;
//	//				delete p;
//	//				return 1;
//
//	//			}
//
//	//			p->next->prev=p->prev;
//	//			p->prev->next=p->next;
//	//			delete p;
//	//			return 1;
//	//		}
//	//		p=p->next;
//
//	//	}
//	//	return 0;
//	//}
//
//	bool insertafter(int search, int add)
//	{
//		Node*p=head;
//		Node*newnode = new Node(add);
//		while(p!= nullptr)
//		{
//			if(p->value == search)
//			{
//				//1.p==tail
//				if(p==tail)
//				{
//					tail=newnode;
//					p->next=newnode;
//					newnode->prev=p;
//					return 1;
//				}
//				//2.p==in between
//				newnode->prev =p;
//				newnode->next=p->next;
//				newnode->prev->next=newnode;
//				newnode->next->prev=newnode;
//				return 1;
//			}
//			p=p->next;
//		}
//		return 0;
//	}
//	bool insertbefore(int search,int add)
//	{
//		Node*p=head;
//		Node*newnode=new Node(add);
//		while(p)
//		{
//			if(p->value == search)
//			{
//				//1.p == head
//				if(p == head)
//				{
//					head=newnode;
//					head->next = p;
//					p->prev = newnode;
//					return 1;
//				}
//				//2.p == in between
//				newnode->prev = p->prev;
//				newnode->next = p;
//				newnode->prev->next = newnode;
//				newnode->next->prev = newnode;
//				return 1;
//			}
//			p=p->next;
//		}
//		return 0;
//	}
//
//};
//
//int main()
//{
//	int num;
//	Doublelinklist d;
//	while(cout<<"enter the numbers from 0 to stop",
//		cin>>num,
//		num!=0)
//	{
//		d.AddtoBack(num);
//	}
//	d.Printforward();
//	//d.PrintBackward();
//
//	
//	/*while(cout<<endl<<"enter the number to delete"<<endl,
//		cin>>n,
//		n)
//	{
//
//		d.DeleteInsert(n);
//		d.Printforward();
//	}*/
//	int n;
//    cout<<endl<<"enter the number to delete"<<endl;
//		cin>>n;
//		d.DeleteInsert(n);
//		d.Printforward();
//	
//
//	int search,add;
//	cout<<endl<<"enter the number you want search and insert after value"<<endl;
//	cin>>search;
//	cin>>add;
//	cout<< d.insertafter(search,add)<<endl;
//	cout<<"after add"<<endl;
//	d.Printforward();
//
//	cout<<endl<<"enter the number you want search and insert after value"<<endl;
//	cin>>search;
//	cin>>add;
//	cout<< d.insertbefore(search,add)<<endl;
//	cout<<"after add"<<endl;
//	d.Printforward();
//
//	cout<<endl<<"No.of elements removed ="<<d.RemoveAll()<<endl;
//	return 0;
//}