#include <stdio.h>

int main()
{

	// Difference between bitwise and logical Operators
	char x = 1, y = 2; // x = 1(0000 0001), y = 2 (0000 0010)
	if (x & y) // 1 & 2 = 0(0000 0000)
		printf("Result of x & y is 1");
	if (x && y) // 1 && 2 = TRUE && TRUE = TRUE = 1
		printf("Result of x && y is 1");

	// Left shift Operator:
	char var = 3; // Note: 3 in binary = 0000 0011 
	printf("%d", var << 1);
	return 0;
}