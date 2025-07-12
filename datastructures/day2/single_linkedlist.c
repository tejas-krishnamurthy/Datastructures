//To demonstrate the single linked list



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

	mid = (struct node*) malloc(sizeof(struct node));

	if(mid == NULL)

	{	
		printf("!!!\nAlert node creation failed!!!\n");

		return ;	

	}

	printf("\nEnter the Data to the new node\n");

	scanf("%d",&mid->data);

	if(first ==NULL)

	{

		first = last = mid;


		mid->next = NULL;
	}

	else

	{

		mid->next =NULL;
		last->next  =mid;
		last  =mid;
	}

}


void display(void)

{
	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;
	}

	temp  = first;

	while(temp!=NULL)//while(temp)can use this also

	{

		printf("<%p> %d\n",temp,temp->data);

		temp  = temp->next;

	}
}
void insert_first(void)
{
	if(first ==NULL)
	{
		printf("\n!!List Not created!!\n");
		return;
	}

	mid  = (struct node*)malloc(sizeof(struct node));

	if(mid == NULL)

	{	
		printf("!!!\nAlert node creation failed!!!\n");

		return ;	

	}

	printf("\nEnter the Data \n");

	scanf("%d",&mid->data);

	mid->next = first;

	first = mid;

}

void insert_last(void)

{
	if(first ==NULL)
	{
		printf("\n!!List Not created!!\n");
		return;
	}

	mid  = (struct node*)malloc(sizeof(struct node));

	if(mid == NULL)
	{	
		printf("!!!\nAlert node creation failed!!!\n");
		return ;	
	}
	printf("\nEnter the Data \n");

	scanf("%d",&mid->data);
	mid->next =NULL;
	last->next  =mid;
	last  =mid;

}
void insert_after(void)
{

	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;
	}
	int key = 0;
	printf("\nEnter the data after which a new node should be started\n");
	scanf("%d",&key);
	
	temp = first;

	while(temp && temp->data != key )
	{


		temp = temp->next;

	}
	if(temp==NULL)
	{
		printf("%d not found\n\n",key );
		return ;
	}

	mid = (struct node*) malloc(sizeof(struct node));


	if(mid==NULL)
	{
		printf("%d not found\n\n",key );
		return ;
	}

	printf("Enter the Data to the new node\n");
	scanf("%d",&mid->data);
	mid->next  =temp->next;
	temp->next = mid;
}

void insert_before(void)

{


	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;
	}
	int key = 0;

	printf("\nEnter the data after which a new node should be started\n");

	scanf("%d",&key);

	temp = first;

	while(temp && temp->data != key )

	{

		temp1 = temp;

		temp = temp->next;
	}

	if(temp==NULL)


	{
		printf("%d not found\n\n",key );

		return ;

	}

	mid = (struct node*) malloc(sizeof(struct node));

	if(mid==NULL)

	{

		printf("%d not found\n\n",key );

		return ;

	}

	if(temp ==first)

	{

		insert_first();

		return;

	}

	printf("Enter the Data to the new node\n");

	scanf("%d",&mid->data);

	mid->next  =temp;

	temp1->next=mid;
}
void delete_first(void)
{


	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;
	}
	temp = first;

	first = first->next;

	free(temp);
}
void delete_last(void)
{
	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;
	}
	temp = first;

	while(temp->next != NULL)

	{
		temp1=temp;

		temp = temp->next;

	}

	if(first == last)
	{

		free(temp);

		first  =last =NULL;

		return;
	}

	last  =temp1;

	last ->next=NULL;

	free(temp);
}

void delete_middle(void)

{

	if(first ==NULL)

	{

		printf("!!!List not created!!!\n");

		return ;

	}

	int key = 0;

	printf("\nEnter the node data to delete\n");

	scanf("%d",&key);

	temp = first;

	while(temp && temp->data !=key)

	{

		temp1 = temp;

		temp=temp->next;


	}


	if(temp ==NULL)

	{


		printf("\n%d Not found\n",key);

		return ;
	}
	if(first == last)
	{
		free(temp);

		first = last =NULL;
	}
	else if(temp ==first)

	{

		delete_first();

	}

	else if(temp ==last)

	{

		delete_last();
	}

	else

	{

		temp1 ->next = temp->next;

		free(temp);


	}

}
void reverse(void)
{


	if(first ==NULL)

	{
		printf("!!!List not created!!!\n");

		return ;
	}

	temp = first;

	temp1 = temp->next;

	while(temp1)
	{

		temp2  = temp1->next;
	
		temp1->next = temp;

		temp = temp1;
	
		temp1 = temp2;


	}

	
	first->next =NULL;

	temp1=first;
	first=last;
	last = first;
	


}
void countnode(void)
{
	if(first ==NULL)

	{
		printf("!!!List not created!!!\n");

		return ;
	}

	

	int node = 0;

	
	temp  = first;

	while(temp!=NULL)//while(temp)can use this also

	{

		node++;
		temp  = temp->next;

	}
	


	
	printf("No of nodes is %d",node);
}
int main()

{
	int ch = 0 ;
	while(1)
	{
		printf("\n0.Exit\n1.Create\n2.Display\n3.Insert First\n4.Insert last\n5.insert after\n6.Insert Before\n7.Delete First\n8.Delete Last\n9.Delete Middele\n10.Reverse\n11.count nodes\n\n");

		printf("Enter your option\n");

		scanf("%d",&ch);

		switch(ch)
		{

			case 0:return 0;

			case 1:create();
			       break;

			case 2:display();
			       break;

			case 3:insert_first();
			       break;

			case 4:insert_last();
			       break;

			case 5:insert_after();
			       break;
			case 6:insert_before();
			       break;
			case 7:delete_first();
			       break;
			case 8:delete_last();
			       break;
			case 9:delete_middle();
			       break;
			case 10:reverse();
			       break;
			case 11:countnode();
			       break;
			default:printf("\nInvalid Option \n\n Valid option are:");

		}
	}
	return 0;
}
