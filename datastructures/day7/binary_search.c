// To implement the Binary search algorithm


#include<stdio.h>



int main()


{

	int size =  5, i=0,key = 0,j= 0,low =0,high = 0,mid = 0;
	
	printf("Enter the size of array\n");

	scanf("%d",&size);

	int arr[size];
	printf("Enter the Elements of array\n");
	for(int i= 0;i<size;i++)
	scanf("%d",&arr[i]);

	printf("Enter the Data to search\n");

	scanf("%d",&key);

	high = size-1;

	while(high >=low)
	{
		mid = (low + high)/2;
	
		if(arr[mid] ==key)
		{
			printf("%d found at %d position\n",key,mid);
			break;

		}
		else if(arr[mid] < key )
			low = low+1;
		else
		
			high = high+1;
		}
		if(high<low)
			printf("%d not found\n",key);
			
		return 0;
	

}
