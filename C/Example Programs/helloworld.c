#include<stdio.h>

main() {
	printf("Hello, world!\n");
	printf("Hello, ");
	printf("world!");
	printf("\n");
	// printf("Hello there!\c"); -> will raise an error!
	// if you try something like this 
	// printf (“hello, world
	// ”);
	// The C compiler will produce an error message.
	return 0;
}
