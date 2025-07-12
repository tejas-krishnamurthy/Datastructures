// To implement the insertion sort




#include<stdio.h>
void insertion(int a[],int n)
{
	int i = 0,j = 0,temp = 0,pos = 0;

	for(i=1;i<n;i++)
	{

		temp = a[i];

		pos = i;
		
		for(j = i-1;j>=0;j--)
		{


			if(a[j]>temp)
			{

				a[pos] = a[pos]^a[j];
			
				a[j] = a[pos]^a[j];

				a[pos] = a[pos]^a[j];

				temp = a[j];

				pos = j;
						
			}

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

	insertion(arr,size);

	printf("After sorting array elemnts are:\n");
	for(i = 0; i<size ;i++)
	printf("Array Elements are : %d\n",arr[i]);

}
