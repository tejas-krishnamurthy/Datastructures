// To demonstrate the double circular linked list



#include<stdio.h>

#include<stdlib.h>
struct node
{
	struct node* prev;
	struct node* next;
	
	int data;
	
};
struct node* first,*last,*temp,*mid;
void create (void)
{
	mid = (struct node*)malloc(sizeof(struct node));
	
	if(mid ==NULL)
	{
		printf("\n!! Allocation Failed !!\n");
		return ;
	}
		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);

	if(first ==NULL)
	{
			
		first = last = mid;

		mid->next = first;
	
		mid->prev = first;	

	}
	
	else
	{

		mid->next = first;

		mid->prev = last;

		
		last->next = mid;

		first->prev = mid;
		last=mid;



	}


}
void display(void)
{
	if(first == NULL)
	{
		printf("\n!! Nothing to Display !!\n");
		return;
	}
	temp = first;
	while(temp)
	{

		printf("Data is : %d\n",temp->data);
		temp = temp->next;
		if(temp ==first)
		break;
	}



}
void insert_after()
{
	
	
	if(first == NULL)
	{
		printf("\n!! Nothing to Display !!\n");
		return;
	}
	int key = 0;
	printf("\nEnter data int list after you want to insert\n");
	scanf("%d",&key);
	temp = first;
	
	while(temp->data != key)
	{
		temp = temp->next;
		if(temp ==first)
		{
			printf("\nKey Not found\n");
			return;
		}
	}
	
	mid = (struct node*)malloc(sizeof(struct node));
	
	if(mid ==NULL)
	{
		printf("\n!! Allocation Failed !!\n");
		return ;
	}
		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);
	
	mid->next = temp->next;

	mid->prev = temp;

	(temp->next)->prev = mid;
	
	temp->next  = mid;

}
void insert_before()
{
	
	
	if(first == NULL)
	{
		printf("\n!! Nothing to Display !!\n");
		return;
	}
	int key = 0;
	printf("\nEnter data int list after you want to insert\n");
	scanf("%d",&key);
	temp = first;
	
	while(temp->data != key)
	{
		temp = temp->next;
		if(temp ==first)
		{
			printf("\nKey Not found\n");
			return;
		}
	}
	
	mid = (struct node*)malloc(sizeof(struct node));
	
	if(mid ==NULL)
	{
		printf("\n!! Allocation Failed !!\n");
		return ;
	}
		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);

	if(temp ==first)

	{

				
	mid->next=temp;
	
	mid->prev=last;

	(temp->prev)->next=mid;

	temp->prev=mid;

	first = mid;
	return;

	}
	
	mid->next=temp;
	
	mid->prev=(temp->prev)->next;

	(temp->prev)->next=mid;

	temp->prev=mid;


}
void delete()
{

	if(first ==NULL)
	{
		printf("List Not created\n");
		return ;
	}
	int key =0;
	printf("Enter the key\n");
	scanf("%d",&key);
	
	temp=first;
	
	while(temp->data != key)
	{
		temp = temp->next;
		if(temp ==first)
		{
			printf("\nKey Not found\n");
			return;
		}
	}
		
	if(temp==first)
	{
		(temp->prev)->prev = last;
	
		first = temp->next;	

		last->next = first;

		free(temp);
	
		return;

	}	
	if(temp==last)
	{
		
	(temp->prev)->next = first;
	first->prev =temp ->prev;

	last = temp->prev;
	free(temp);
	
		return;

	}	
	(temp->prev)->next = temp ->next;
	(temp->next)->prev = temp ->prev;
	free(temp);
	return;


}
void count(void)
{
	if(first == NULL)
	{
		printf("\n!! Nothing to Display !!\n");
		return;
	}
	int count =0;
	temp = first;
	while(temp)
	{

		count++;
		temp = temp->next;
		if(temp ==first)
		break;
	}
	printf("No of Nodes is %d \n",count);



}	
int main()
{
	int ch=0;
	while(1)
	{
	
	printf("\n0. Exit\n1. Create\n2. Display\n3. Insert After\n4. Insert Before\n5. Delete\n6. Count\n\n");
	scanf("%d",&ch);
	switch(ch)
	{
	
		case 0 :return 0;	

		case 1 :create();
			break;
		case 2 :display();
			break;
		case 3 :insert_after();
			break;
		case 4 :insert_before();
			break;
		case 5 :delete();
			break;
		case 6 :count();
			break;

	
	}
	


}


	
		


return 0;

}
