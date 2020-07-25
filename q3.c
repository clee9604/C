#include <stdio.h>
#include <stdlib.h>


struct Num
{
	int n1,n2,n3;
};


int main()
{
	int i;
	struct Num number;
	FILE *fp;

	if((fp = fopen("file3.txt", "w")) == NULL)
	{
		printf("File NOT exist");
		exit(1);
	}

	for(i = 0; i<5; ++i)
	{
		number.n1 = i;
		number.n2 = 5*i;
		number.n3 = 5*i + 1;
		fwrite(&number, sizeof(struct Num), 1, fp);
	}

	for(i = 1; i < 5; ++i)
	{
		fread(&number, sizeof(struct Num), 1, fp);
		printf("n1: %d\tn2: %d\tn3: %d", number.n1, number.n2, number.n3);
	}
	fclose(fp);


	return 0;

}
