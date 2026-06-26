#include<stdio.h>


//%p is the format specifier for printing a memory address

int main() {

	//Declare an integer named tuna and initialize it to 19
	//CODE:

	printf("Address\t\t\tName\t\tValue\n");

	//Call printf() using %p = pointer Remember when using pointer it must match MEMORY
	//ADDRESS. Use tuna in 3 ways. 1 pointer, 1 string and 1 int.
	//CODE:

	printf("\n\nUsing Pointers to demonstrate setting a pointer to a memory address\n\n");

	//Declare int pointer(*) pTuna initialized to the memory address of tuna.
	//CODE:

	printf("Address\t\t\t\Name\t\tValue\n");

	//Call printf() with arg1 like we used earlier but using pointer pTuna in first arg but rest the same.
	//CODE:

	//Call printf() to show memory details of pointer var itself (pTuna) (pTuna itself has different memory address)
	//use %p %s and %p to account for value INSIDE the pointer which is tuna's address. 
	//CODE:

}