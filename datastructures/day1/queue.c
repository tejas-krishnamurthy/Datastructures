//To demonstrate the queue data structure


#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = 0 ,rear = -1;
void insert_rear(void)

{

	if(rear ==SIZE -1)
	{

		printf("Queue is full\n");
		return ;

	}
	int data = 0;
	printf("Enter the data to the queue\n");
	scanf("%d",&data);

	rear++;
	queue[rear] = data;


}
void delete_front(void)
{

	if(rear == -1)
	{


		printf("Queue is empty\n");
		return;
	}
	int i = 0;

	printf("Deleated Data is %d\n",queue[front]);

	for(i = 0;i<rear;i++)
		queue[i] = queue[i+1];
	rear--;


}
void display()
{

	if(rear == -1)
	{


		printf(" !Nothing to display !\n");

	}

	int i  =0;
	for(i =front;i<=rear;i++)
		printf("%d\t",queue[i]);
	printf("\n");

}
int main()
{

	int ch = 0;

	while(1)

	{

		printf("0.Exit\n1. Insert Rear \n2. Delete Front\n3. Display\n");

		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch)

		{

			case 0: return 0;
			case 1: insert_rear();
				break;

			case 2: delete_front();
			case 3: display();
			default:printf("Invalid choice\n\n");


		}


	}



}
