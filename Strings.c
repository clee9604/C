#include <stdio.h>

int main()
{

	char c[100]= " ";
	int i = 0;
	int length = 0;

	printf("Enter the String: ");
	scanf("%s", c);

	for(i = 0; c[i] != '\0'; ++i)
	{
		length = length + 1;	
	}

	for(i = 0; i < length; i++)
	{
		
		printf("The ASCII value of %c is %d", c[i],c[i]);
		printf("\n");
		
	}

	return 0;
}
