// To demonstrate the double linked list







#include<stdio.h>
#include<stdlib.h>


struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
struct node *first,*mid,*last,*temp;
void create(void)
{
	mid= (struct node*)malloc(sizeof(struct node));

	if(mid ==NULL)
	{
		printf("\n!!Allocation Failed!!\n");
		return;
	}
	printf("Enter the info to new node\n");
	scanf("%d",&mid->data);
	if(first ==NULL)
	{
		mid->prev=NULL;
		mid->next=NULL;
		last = first = mid;
	}
	else
	{
		mid->prev =NULL;
		mid->next =first;
		first->prev =mid;
		first = mid;

	}


}

void forward(void)

{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	temp = first;
	
	while(temp)
	{	
		printf("Data is: %d\n",temp->data);
		temp = temp->next;

	}

}
void reverse(void)

{

	if(last==NULL)
	{
		printf("\n!!@@ List Does Not Exist @@!!\n");
		return;
	}
	temp = last;
	
	while(temp)
	{	
		printf("Data is: %d\n",temp->data);
		temp = temp->prev;

	}

}
void insert_first(void)
{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	mid= (struct node*)malloc(sizeof(struct node));

	if(mid ==NULL)
	{
		printf("\n!!Allocation Failed!!\n");
		return;
	}
	printf("Enter the info to new node\n");
	scanf("%d",&mid->data);

		mid->prev =NULL;

		mid->next =first;

		first->prev =mid;

		first = mid;

}
void insert_last(void)
{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	mid= (struct node*)malloc(sizeof(struct node));

	if(mid ==NULL)
	{
		printf("\n!!Allocation Failed!!\n");
		return;
	}
	printf("Enter the info to new node\n");
	scanf("%d",&mid->data);

		mid->prev=last;

		mid->next =NULL;

		last->next =mid;

		last = mid;

}
void insert_after(void)
{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	int key = 0;
	printf("Enter the data after u want to put");
	scanf("%d",&key);
	temp = first;
	while(temp && temp->data != key)
	{

		temp = temp->next;
	}
	if(temp ==NULL)
	{
		printf("\nKey not founf\n");
		return;
	}
	mid= (struct node*)malloc(sizeof(struct node));

	if(mid ==NULL)
	{
		printf("\n!!Allocation Failed!!\n");
		return;
	}
	if(temp ==last)
	{

	insert_last();
	return;

	}
	printf("\nEnter the info to new node\n");

	scanf("%d",&mid->data);

	mid->prev = temp;
	mid->next = temp->next;
	(mid->next)->prev  = mid;

	temp->next  =mid;
	
}
void insert_before(void)
{
	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	int key = 0;
	printf("Enter the data after u want to put");
	scanf("%d",&key);
	temp = first;
	while(temp && temp->data != key)
	{

		temp = temp->next;
	}
	if(temp ==NULL)
	{
		printf("\nKey not founf\n");
		return;
	}
	if(temp == first)
	{
		insert_first();
		
		return;

	}
	mid= (struct node*)malloc(sizeof(struct node));

	if(mid ==NULL)
	{
		printf("\n!!Allocation Failed!!\n");
		return;
	}
	printf("\nEnter the info to new node\n");

	scanf("%d",&mid->data);
	
	mid->prev = temp->prev;

	mid->next = temp;

	(temp->prev)->next = mid;

	temp->prev = mid;
}
void delete_firstnode(void)
{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}

	temp = first;

	if(first ==last)
	{
		free(temp);
		first = last =NULL;
		return;

	}
	
	first = first->next;

	first->prev =NULL;

	free(temp);
}

void delete_lastnode(void)

{

	if(first ==NULL)

	{
		printf("\n!! LIst Dosent Exist!!\n");

		return;
	}

	temp = last;

	if(first ==last)

	{
		free(temp);

		first = last =NULL;

		return;

	}
	
	last = last->prev;

	last->next =NULL;

	free(temp);
}
void delete_middle(void)

{

	if(first ==NULL)

	{
		printf("\n!! LIst Dosent Exist!!\n");

		return;
	}
	
	int key =0;
	printf("\nEnter the Data To delete\n");
	scanf("%d",&key);

	temp = first;

	while(temp && temp->data !=key)
	{
		temp = temp->next;
	}
	
	if(temp ==NULL)
	{
		printf("\nKey Not Found");
		return;
	}
	if(temp ==first)
	{
		delete_firstnode();
		return;
	}
	if(temp ==last)
	{
		delete_lastnode();
		return;
	}

	(temp->prev)->next = temp->next;

	(temp->next)->prev = temp->prev;

	free(temp);
	

}
void count(void)

{

	if(first ==NULL)
	{
		printf("\n!! LIst Dosent Exist!!\n");
		return;
	}
	temp = first;
	int count=0;	
	while(temp)
	{	
	count++;
		temp = temp->next;
	}
	printf("Nodes is %d",count);
}


int main()
{
	int ch = 0;
	while(1)
	{
		printf("\n0.Exit\n1.Create\n2.Display Forward\n3.Display Reverse\n4.Insert First\n5.Insert Last\n6.Insrt after\n7.Insert Before\n8.Delete First Node\n9.Delete Last\n10.Delete Middle\n11.Count Node\n\n");
		printf("Please Enter Your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{

			case 0:exit(0);

			case 1:create();
			       break;
			case 2:forward();
			       break;
			case 3:reverse();
			       break;
			case 4:insert_first();
			       break;
			case 5:insert_last();
			       break;
			case 6:insert_after();
			       break;
			case 7:insert_before();
			       break;
			case 8:delete_firstnode();
			       break;
			case 9:delete_lastnode();
			       break;
			case 10:delete_middle();
			       break;
			case 11:count();
			       break;
			default:printf("\nInvalid option\n\n Valid Options are:\n");
	

		}	
	}	
	return 0;
}
