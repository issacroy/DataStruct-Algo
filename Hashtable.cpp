//#include <iostream>
//#include <string>
//using namespace std;
//
//class Hashtable
//{
//	struct Entry
//	{
//		int key;
//		string name;
//		Entry *next;
//		Entry(int key, const string name): key(key), name(name), next(nullptr)
//		{}
//	};
//	Entry **table;
//	int size;
//
//	//creating hash
//	int Hash(int key)
//	{	
//		int offset= key%10;
//		return offset;
//	}
//public:
//
//	//creating hashtable in heap with initializing each column by null
//	Hashtable(int s=10)
//	{
//		size=s;
//		table = new Entry*[size];
//		for(int offset =0; offset<size; offset++)
//		{
//			table[offset]=nullptr;
//		}
//	}
//
//	//Entering id and name into each column in hashtable
//	void put(int key, const string &name)
//	{
//		int offset=Hash(key);
//		//strcpy(string name,table[k]);
//		//table[k]=name;
//		Entry *newEntry = new Entry(key,name);
//		newEntry->next=table[offset];
//		table[offset]=newEntry;
//	}
//	void printdebug()
//	{
//		for(int i=0;i<size;i++)
//		{
//			cout<<i<<":";
//			for(Entry *current=table[i];current !=nullptr;current=current->next)
//			{
//				cout<<current->key<<"   "<<current->name;
//
//			}
//			cout<<endl;
//		}
//
//	}
//
//	//void printDebug()
//	//{  
//	//	/*int offset=1;
//	//	Entry *current=table[offset];
//	//	for(;offset<=s; offset++)
//	//	{
//	//	cout<<current->key<<'\t'<<current->name<<endl;
//	//	current=current->next;
//
//	//	}*/
//	//	table = new Entry*[size];
//	//	int offset =1;
//	//	Entry *current=table[offset];
//	//	for(; offset<size; offset++)
//	//	{
//	//		cout<<current->key<<"\t"<<current->name;
//	//	}
//	//}
//};
//int main()
//{
//	int id;
//	string name;
//	Hashtable H;
//	while(cout<<endl<<"Enter the id(10 to stop)"<<endl,
//		cin>>id,
//		id!=10)
//	{
//		cout<<"Enter the name"<<endl;
//		cin>>name;
//		H.put(id,name);
//		H.printdebug();
//	}
//
//
//	return 0;
//}