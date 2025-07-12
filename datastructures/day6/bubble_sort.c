// To implement bubble sort algorithm



#include<stdio.h>
void bubble(int arr[],int n)
{

	int i= 0,j = 0,ref=0;

	for(i = 0;i<n -1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{

			arr[j]=arr[j]^arr[j+1];

			arr[j+1]=arr[j]^arr[j+1];

			arr[j]=arr[j]^arr[j+1];
			ref = 1;


			
			}
		if(ref ==1)
			continue;
		else
			break;
		}
	}
		
	



	return;



}
int main()
{
	int size = 0,i =0;

	printf("\n Enter the size of the array\n");
	
	scanf("%d",&size);

	int arr[size];

	printf("\nEnter %d elements\n",size);
	for(i= 0;i<size;i++)
		scanf("%d",&arr[i]); 
	
	for(i= 0;i<size;i++)
	printf("\n Array Elements %d \n",arr[i]);



	bubble(arr,size);
	
	printf("Sorted elements are \n");

	for(i= 0;i<size;i++)
	printf("\n Array Elements %d \n",arr[i]);


	return 0;	

}
