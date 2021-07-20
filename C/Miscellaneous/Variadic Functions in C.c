#include <stdio.h>
#include <stdarg.h>

void print_ints(int num, ...)
{
	// three different macros we use here are: va_start, va_arg, va_end 
	va_list args; // we also need to define a variable of type va_list
	va_start(args, num); // it takes 2 arguments, the name of the va_list
	// and the name of the last required argument.

	for (int i = 0; i < num; i++)
	{
		int value = va_arg (args, int); // it takes 2 arguments just like va_start
		// but the second argument is the type of the value we are getting.
		// these types cannot be self promting types. So, you can't use char, float or shorts
		// int, pointers and double are fine.
		printf("%d: %d\n", i, value);
	}

	va_end(args);
}

int main(){
	print_ints(3, 3, 4, 6);
}