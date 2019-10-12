//#include <iostream>
//using namespace std;
//struct Node
//{
//
//	int value;
//	Node*next;
//
//};
//class Singlelist
//{
//private:
//	Node*head;
//	Node*tail;
//public:
//	Singlelist()
//	{
//		head=nullptr;
//		tail=nullptr;
//	}
//	void printforward()
//	{
//		Node*current;
//		for(current=head;current;current=current->next)
//		{
//			cout<<current->value;
//		}
//		cout<<endl;
//	}
//	void Addtoback(int num)
//	{
//		Node*newnode=new Node();
//	     newnode->value=num;
//		if(nullptr==head)
//			head=newnode;
//		else
//			tail->next=newnode;
//			tail=newnode;
//		    
//	}
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
//	void Addtofront(int value)
//	{
//	Node*newnode1;
//	newnode1=new Node();
//	newnode1->value=value;
//	newnode1->next=head;
//	head=newnode1;
//	}
//
//};
//int main()
//{
//	int num;
//	Singlelist s;
//	while(cout<<"enter the num 0 to stop",
//		cin>>num,
//		num!=0)
//	{
//		s.Addtoback(num);
//	}
//	s.printforward();
//	cout<<endl<<"enter a value";
//	cin>>num;
//	s.Addtofront(num);
//	s.printforward();
//	cout<<"no.of elements removed="<<s.RemoveAll()<<endl;
//	return 0;
//}
