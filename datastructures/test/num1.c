





#include<stdio.h>

int main()

{

	FILE* fp;

	char* x;

	printf("\n Enter the file name:");

	//scanf("%s",x);

	fp = fopen(x,"r");

	if(fp ==NULL)
	{
		printf("The -%s- is not found in the present directory\n",x); 
		return 0;

	}
	else
	{

	printf("The file -%s-is found in the present directory\n",x);
	return -1;

	}

	fclose(fp);
	


	return 0;
}
