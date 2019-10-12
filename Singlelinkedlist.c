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
//
//int main()
//{
//	struct node*newnode;
//	struct node*current;
//	int num;
//
//	while(printf("enter the value from 0 to stop"),
//		scanf("%d", &num),
//		num!=0)
//	{
//		newnode=(struct node*)malloc(1*sizeof(struct node));
//		newnode->value=num;
//		newnode->next=NULL;
//		if(NULL==head)
//			head=newnode;
//		else
//			tail->next=newnode;
//		tail=newnode;
//	}
//	for( current=head; current!=NULL; current=current->next)
//	{
//		printf("%d \t", current->value);
//	
//	}
//	free(newnode);
//	return 0;
//}
