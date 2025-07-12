// To demonstrate the circular queue


#include<stdio.h>
#define SIZE 5	


int queue[SIZE];
int front  = 0,rear = -1,count  = 0;

void insert_rear(void)
{
	if(count ==SIZE)
	{

		printf("\nQueue is full!!\n");
		return ;
	}

	int data  =0;

	printf("Enter the data to the queue \n");

	scanf("%d",&data);

	rear = (rear+1) % SIZE;

	queue[rear]  = data;

	count++;


}	

void deleate_front(void)
{

	if(count == 0 || rear == -1)
	{

		printf("!!!queue is Empty!!!\n");

		return;

	}

	printf("Deleted data is %d\n ",queue[front]);

	front = (front+1) % SIZE;

	count--;

}

void display(void)

{

	if(rear == -1 || count ==0)
	{
		printf(" !!Nothing to display!!");
		return ;
	}

	int temp =front,i=0;
	for(i = 0;i<count;i++)
{

	printf("%d\t",queue[temp]);
			temp = (temp+1) % SIZE;
			//printf("%d",count);

}
}


int main()
{


	int ch = 0;
	while(1)
	{
		printf("\n0. Exit\n1. Insert Rear\n2. Delete Front\n3. Display\n\nEnter Your choice\n");
		scanf("%d",&ch);

		switch(ch)

		{


			case 0:return 0;

			case 1:insert_rear();
			       break;

			case 2:deleate_front();
			       break;

			case 3:display();
			       break;


		}

	}
		return 0;
}
