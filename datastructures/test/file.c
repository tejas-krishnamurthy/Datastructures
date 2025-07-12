// To implement the file 


#include<stdio.h>

int main(int argv[],char* argc)


{

	if(sizeof(argv) != 2)

	printf("!! Enter the Two characters !!\n");

	else

	{
	
	FILE* fp,*fp1;

	fp = fopen("contact.txt","r");
	
	fp1 = fopen("contact2.txt","r+");

	char ch=0;


	ch=fgetc(fp);

//	printf("%d",ftell);

	while(ch !=EOF)
	{
	if(ch==argc[1])
	{
	
		fprintf(fp1,"%c",ch);
		
	}
		ch=fgetc(fp);
	}
	fclose(fp);
	fclose(fp1);
	}





	return 0;
	}
