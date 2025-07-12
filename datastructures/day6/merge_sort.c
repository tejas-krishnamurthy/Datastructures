// To implement the merge sort




#include<stdio.h>

int main()
{
	int size1,size2,i=0,j=0,k=0;

	printf("Enter the size of array1 \n");
	scanf("%d",&size1);

	printf("Enter the size of array2 \n");
	scanf("%d",&size2);

	int arr1[size1],arr2[size2],arr3[size1+size2];

	printf("Enter the %d Elements for the array1\n",size1);
	for(i = 0;i<size1;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the %d Elements for the array2\n",size2);
	for(i = 0;i<size2;i++)
		scanf("%d",&arr2[i]);

	i =0;


	while(k < size1 + size2)
	{
		while(i < size1   && j< size2)
		{
			if(arr1[i] < arr2[j])
			{

				arr3[k] = arr1[i];
				i++;
				k++;
			}
			else
			{
				arr3[k] = arr2[j];
				j++;
				k++;
			}


		}
		if(size1>size2)
		{
			while(i<size1)
			{
				arr3[k] = arr1[i];
				i++;
				k++;
			}
		}

		else if(size1>size2)
		{
			while(j>size2)
			{
				arr3[k] = arr2[j];
				j++;
				k++;
			}
		}
		else if(i ==size1 && j ==0)
		{
			while(j>size2)
			{
				arr3[k] = arr2[j];
				j++;
				k++;
			}
			
		}

		else if(size1>size2)
		{
			while(j>size2)
			{
				arr3[k] = arr2[j];
				j++;
				k++;
			}
		}
		else if(size1 == size2)
		{

			while(i!=size1)
			{
				arr3[k] = arr1[i];
				i++;
				k++;
			}
			while(j!=size1)
			{
				arr3[k] = arr2[j];
				j++;
				k++;
			}
		}
		
		else
		{
		while(i!=size1)

		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
		while(i!=size2)
		{
			
			arr3[k] = arr2[i];
			i++;
			k++;
		}


		}
		
			

		
	
	printf("\n Enements in array3 is \n");
	for(i=0;i<size1+size2;i++)
		printf(" %d\n",arr3[i]);
}}
