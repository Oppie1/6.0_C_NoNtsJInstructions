#include<stdio.h>
#include<stdlib.h>



int main() {


	//Declare an uninitialized int pointer named points.

	//Assign points pointer to amount of memory requested from heap. Use an int* typecast pointer,
	//malloc() with the arg of 5 times the sizeof() with int as its arg.
	//CODE:

	printf("Memory successfully borrowed from the heap for 5 integers.\n");
	//Call printf() declaring amount of bytes we are taking from heap using EXPRESSION from arg above.
	//CODE:

	//Call the free() with the arg points to free up the bytes held in points storage.
	//CODE:

	printf("\n\nMemory has been returned to the heap.\n");

}