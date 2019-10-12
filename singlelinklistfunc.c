//#include <stdio.h>
//#include <stdlib.h>
//
//struct node
//{
//	int value;
//	struct node*next;
//};
//
//struct node* head;
//struct node*tail;
//void printforward()
//{
//	struct node*current;
//	for( current=head; current!=NULL; current=current->next)
//	{
//		printf("%d \t", current->value);
//	
//	}
//}
//void AddtoBack(int num)
//{
//	struct node*newnode;
//	
//newnode=(struct node*)malloc(1*sizeof(struct node));
//		newnode->value=num;
//		newnode->next=NULL;
//		if(NULL==head)
//			head=newnode;
//		else
//			tail->next=newnode;
//		tail=newnode;
//}
//void AddtoForward(int value)
//{
//	struct node*newnode1;
//	newnode1=(struct node(*))malloc(sizeof(struct node));
//	newnode1->value=value;
//	newnode1->next=head;
//	head=newnode1;
//}
//int main()
//{
//	
//	int num;
//
//	while(printf("enter the value from 0 to stop"),
//		scanf("%d", &num),
//		num!=0)
//	{
//		AddtoBack(num);
//		
//	}
//	AddtoForward(9);
//	printforward();
//	//free(newnode);
//	return 0;
//}
