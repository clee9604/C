#include <stdio.h>

int main()
{
	long binary;
	long hex = 0;
	long i = 1;
	long remainder;

	printf("Enter binary number: ");
	scanf("%ld", &binary);

	while(binary != 0)
	{
		remainder = binary % 10;
		hex = hex + remainder * i;
		i = i * 2;
		binary = binary / 10;
	}

	printf("hex number is: %1X", hex);
	
	return 0;
}
