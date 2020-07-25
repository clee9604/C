#include <stdio.h>

int main()
{
	FILE *fp;
	int ch = 0;

	fp = fopen("file2.txt", "w");

	if(fp == NULL)
	{
		printf("File NOT exist\n");
	}

	for(ch = 65; ch <90; ++ch)
	{
		fputc(ch, fp);
	}


	fclose(fp);
	printf("Success");
	return 0;
}
