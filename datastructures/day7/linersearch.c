// To implement the linear search algorithm


#include<stdio.h>



int main()


{

	int size = 0 , i=0,key = 0,j= 0;

	int arr[5] = {0,2,9,4,5};

	printf("Enter the Data to search\n");

	scanf("%d",&key);

	//return 0;

	int *ptr=arr;
	while(*ptr != key)
	{
		ptr++;
		i++;
		if(*ptr ==key)
		break;
		
		j++;
		if(j ==4)
		break;
	}
	if(*ptr ==key)
		printf("%d Key found and position is %d\n",key,i);
	else
		printf("Key not found\n");
	return 0;





}
