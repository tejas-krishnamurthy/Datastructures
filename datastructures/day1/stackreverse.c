//To demonstrate the stack  data structure using arrays




#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
//char stack[SIZE];
int top =-1;

int stack[5];

void pop(void)
{

	if(top ==-1)

	{
		printf("Stack is underflow\n");

		return;
	}
	printf("Popped Data is %d\n",stack[top]);

	

	top--;

}
void display(void)
{

	if(top == -1)

	{

		printf("Stack is empty\n");
		return;

	}
	int i=top;
	printf("\n Content from top of the stack\n");
	for(;i>=0;i--)
	printf("%d\n",stack[i]);
}
void push(void)
{


	if(top == SIZE -1)
	{
		printf("Stack is over flow\n");
		return; 

	}

	int data = 0;

	printf("Enter the data to top of the stack\n");
	scanf("%d",&data);

	top++;
	stack[top]=data;
	

}

int main()

{
	int ch = 0;
	
	while(1)
	
{

	printf("0.Exit\n1.Push\n2.PoP\n3.Display\n\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);

	switch(ch)
	{

	case 0:exit(0);
		break;
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	default:printf("\n Invalid Choice Valid Choice is\n");
	/*case 4:palindrome();
		break;*/

	}

	

}
	return 0;

}
