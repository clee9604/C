#include <stdio.h>

int main()
{
	FILE *str1;
        char str[] = "Hello World";
	

	str1 = fopen("file.txt", "w");
	fwrite(str, 1, sizeof(str), str1);

	fclose(str1);

	return 0;
}
