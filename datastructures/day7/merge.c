// To implement the merge two files
#include<stdio.h>

int main(int argc,char* argv[])
{
	FILE* fp1,*fp2,*fp3;
		char ch=0;
	
	if(argc !=4)
	{
		printf("\n!!Usage error!!\n");
		return -1;
	}

	fp1 = fopen(argv[1],"r");

	if(fp1 ==NULL)
	{
		perror("fopen");
		return -1;
	}


	fp2 = fopen(argv[2],"r");
	if(fp2 ==NULL)
	{
	
		perror("fopen");
		return -1;
	}
	fp3 = fopen(argv[3],"w");

	if(fp3 ==NULL)
	{
		perror("fopen");
		return -1;

	}
	while((ch = fgetc(fp1))!=EOF)
		fputc(ch,fp3);
	while((ch = fgetc(fp2))!=EOF)
		fputc(ch,fp3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

}
