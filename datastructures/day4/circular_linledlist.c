//To implement the single circular linked list




#include<stdio.h>
#include<stdlib.h>

struct node
{

	int data;

	struct node* next;

};
struct node* first,*last,*mid,*temp,*temp1,*temp2;

void create(void)
{
		mid = (struct node*)malloc(sizeof(struct node));	

		if(mid ==NULL)
		{
			printf("\n!!	Failed 	!!\n");	

			return;
		}

		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);

		if(first == NULL)

		{
			first = last = mid;

			first->next = mid;
		}
		else
		{
			mid->next = first;
	
			last->next = mid;

			last = mid;

		}
}
void display(void)
{

	if(first ==NULL)
	{
		printf("Nothing To Display");
		return;
	}
	temp =  first;
	while(temp)
	{
	printf("\nData is : %d",temp->data);
	temp=temp->next;
	if(temp == first)
	break;
	}
}

void insert_after(void)
{
	if(first ==NULL)
	{
		printf("Nothing To Display");
		return;
	}
	int key =0;
	printf("\nEnter the Data After which a New Node to be Inserted:\n");
	scanf("%d",&key);
	temp =first;
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
			printf("\n!!	Malloc Failed 	!!\n");	

			return;
		}
		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);

		mid->next = temp->next;

		temp->next = mid;

	
}
void insert_before(void)
{
	if(first ==NULL)
	{
		printf("Nothing To Display");
		return;
	}
	int key =0;
	printf("\nEnter the Data After which a New Node to be Inserted:\n");
	scanf("%d",&key);
	temp =first;
	while(temp->data != key)
	{

		temp1=temp;
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
			printf("\n!!	Malloc Failed 	!!\n");	

			return;
		}
		printf("\nEnter the Data To the Node\n");
		scanf("%d",&mid->data);

		if(temp ==first)

		{

		mid->next = first;

		first = mid;

		last->next = mid;
	
		return;

		}

		mid->next = temp;

		temp1->next = mid; 
}
void delete(void)
{

	if(first ==NULL)
	{
		printf("Nothing To Display");
		return;
	}
	int key =0;
	printf("\nEnter the Data You Want to delete:\n");
	scanf("%d",&key);
	temp =first;
	while(temp->data != key)
	{

		temp1=temp;
		temp = temp->next;
		if(temp ==first)
		{
			printf("\nKey Not found\n");
			return;
		}
	}
	if(first ==last)//only for one node
	{


		free(temp);
		first = last =NULL;
		return ;
	}
	if(temp == first)
	{

	first = first->next;

	last->next = first;

	free(temp);
	return;

	}

	if(temp ==last)
	{
	last = temp1;
	
	temp1->next = first;
	
	free(temp);
	
	return;
	

	}
	temp1->next=temp->next;

	free(temp);
}
void count(void)
{

	if(first ==NULL)
	{
		printf("Nothing To Display");
		return;
	}
	int count = 0;
	temp =  first;
	while(temp)
	{
	count++;
	temp=temp->next;
	if(temp == first)
	break;
	
	}
	printf("\nNo of Nodes is : %d",count);
}	
int main()

{

	int choice = 0;
	while(1)
	{

		printf("\n0. Exit\n1. Create\n2. Display\n3. Insert After\n4. Insert Before\n5. Delete\n6. Count\n\n");

		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
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
			default: printf("Invalid option\nValid Options are:\n\n");
		}



	}
return 0;
}
