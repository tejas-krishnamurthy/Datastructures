 // To implement the circular queue




#include<stdio.h>

#define SIZE 5

int queue[SIZE];

int rear = -1,count = 0,front  =0;

void insert(void)
{

	if(rear == SIZE || count == SIZE)
	{
		printf("\n !! Queue is full !!\n");
		return ;

	}
	int data = 0;
	
	printf("\n Enter the data to the circular queue\n");

	scanf("%d",&data);

	int i = 0;

	rear = (rear+1)%SIZE;

	queue[rear]  = data;

	count++;
}
void delete(void)
{
	

	if(rear ==-1 || count ==0)
	{
		printf("\n !! Queue Not Created !!\n");
		return ;

	}
	
	printf("Deleted Data is %d",queue[front]);
	
	front  = (front+1)%SIZE;

	count --;

}
void display(void)
{

	if(rear ==-1 || count == 0)

	{
		printf("\n !! Queue Not Created !!\n");
		return ;

	}
	int i= 0;
	
	int temp = front;

	for(i = 0;i<count;i++)
	{
		printf("%d\n",queue[temp]);
		
		temp = (temp+1)%SIZE;
	}

}
int main()

{

	int ch = 0;

	while(1)
	{

		printf("\n0.Exit\n1.Insert\n2.Delete\n3.Display\n");
		
		printf("\n Enter the Above Choice\n");

		scanf("%d",&ch);
		
		switch(ch)
		{

			case 0:return 0;
			
			case 1:insert();
			
				break;
			case 2:delete();
			
				break;
			case 3:display();
			
				break;
			default :printf("\n!!! Invalid Choice \nValid Options are\n");
			
				break;
		}
	}
	return 0;
}
