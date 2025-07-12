// To implement ascending priority queue



#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = 0,rear = -1;


void insert_rear()
{

	if(rear == SIZE -1)
	{

		printf("\n!!Queue is full!!\n");
		return ;

	}
	int data = 0;

	printf("Enter the data to the queue\n");

	scanf("%d",&data);
	int i=0;
	for( i =rear;i>=0 && queue[i]> data ; i--)

		queue[i+1] = queue[i];

	i++;

	rear++;

	queue[i] = data;
}

void display(void)
{

	if(rear ==  -1)

	{

		printf("\n!!Nothing to display!!\n");
		return ;
	}
	for(int i =front;i<=rear;i++)
		printf("%d\n",queue[i]);

}
void delete_front(void)
{
	if(rear == -1)
	{
		printf("\nInsert Not done\n");
		return ;
	
	}

	for(int i=0;i<=rear;i++)
		queue[i] = queue[i+1];
	rear--;
}

int main()
{
	int ch = 0;
	while(1)
	{

		printf("\n0. Exit\n1. Insert Rear\n2. Delete Front\n3. Display\n\nEnter your choice\n");
		scanf("%d",&ch);

		switch(ch)
		{

			case 0:return 0;


			case 1: insert_rear();
				break;

			case 3:display();
			       break;

			case 2:delete_front();
			       break;

			default:printf("Invalid option \n\n valid options are :");
		}

	}
	return 0;
}
