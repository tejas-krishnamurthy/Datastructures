// To implement the Double linked list




#include<stdio.h>

#include<stdlib.h>

struct node
{
	int data;
	
	struct node* prev;

	struct node* next;

};
struct node* mid,*last,*first,*temp;

void create(void)
{
	mid  = (struct node*)malloc(sizeof(struct node));
	
	if(mid == NULL)
	{
		printf("\n!! Node Creation Failed !!\n");
		return ;
	}
	//int data = 0;

	printf("\n Enter the Data to the Node\n");
	
	scanf("%d",&mid->data);

	if(first ==NULL)
	{
	

		mid->next=NULL;

		mid->prev=NULL;
		first = last =mid;
	}
	else
	{

	mid->prev = NULL;

	mid->next = first;

	first->prev = mid;

	//last = first;

	first = mid;
}
}
void display(void)
{

	if(first ==NULL)

	{
		printf("\n !! Nothing To display !!");
		return;

	}
	temp=last;

	while(temp)

	{

		
		//	break;
		printf("%d\n",temp->data);

		temp=temp->prev;
	}


}
void create_after(void)
{


	if(first ==NULL)

	{
		printf("\n !! List Not Created !!");
		return;

	}
	int key = 0;

	printf("\n Enter the Key to  Search\n");

	scanf("%d",&key);
	
	temp =first;

	while (temp && temp->data!=key)
	{
		temp = temp->next;

	}

	if(temp ==NULL)
	{
		printf("\n Data Not found\n");
		return;
	}
	

	mid  = (struct node*)malloc(sizeof(struct node));
	
	if(mid == NULL)
	{
		printf("\n!! Node Creation Failed !!\n");
		return ;
	}
	int data = 0;

	printf("\n Enter the Data to the Node\n");
	
	scanf("%d",&mid->data);

	if(temp ==first)
	{
	mid->prev = NULL;

	mid->next = first;

	first->prev = mid;

	first = mid;

	
	return;

	}	

	mid->next = temp;

	mid->prev = temp->prev;

	(temp->prev)->next = mid;

}

int main()


{

	int ch = 0;

	while(1)

	{
		printf("\n0.Exit\n1.Create\n2.Create After Node\n3.Create Before Node\n4.Display in Reverse\n");
		
		scanf("%d",&ch);

		switch(ch)
		{

			case 0:return 0;
		
			case 1:create();
	
				break;

			case 2:create_after();

				break;

		//	case 3:create_before();

		//		break;

			case 4:display();

				break;

			default:printf("\n !! Invalid Options !!\n\nValid Options are :\n");
	

		}







	}
	return 0;

}
