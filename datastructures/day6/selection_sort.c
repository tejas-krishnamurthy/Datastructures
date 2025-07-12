// To implement the selection sort




#include<stdio.h>
void selection(int arr[],int n)
{
	int i = 0,j = 0,pos = 0;

		for(i = 0;i<n-1;i++)
		{
			pos = i;

			for (j = i+1 ; j<n;j++)
					
			{
				if(arr[j] < arr[pos])
				pos = j;	
			}
	
			if( i != pos)
			{
				arr[i] = arr[i]^arr[pos];

				arr[pos] = arr[i]^arr[pos];	

				arr[i] = arr[i]^arr[pos];
			}

		}

}
int main()
{

	int size = 0,i=0;

	printf("Enter the size of the array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter %d Array Elements\n",size);

	for(i = 0; i<size ;i++)
		scanf("%d",&arr[i]);

	printf("Entered array is \n");
	
	for(i = 0; i<size ;i++)
	printf("Array Elements are : %d\n",arr[i]);

	selection(arr,size);

	printf("After sorting array elemnts are:\n");
	for(i = 0; i<size ;i++)
	printf("Array Elements are : %d\n",arr[i]);

}
