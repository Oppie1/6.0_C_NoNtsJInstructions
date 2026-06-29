#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//Make a file to read from in program files in notepad or in solution explorer -> source files -> TestReadFile.txt.

int main() {

//Declare a FILE pointer * uninitialized and named fPointer.
//CODE:

//Assign fPointer to the function fopen() with arg, fPointer "TestReadFile.txt" and, "r"
//CODE:

//If the file couldn't be opened (e.g. it doesn't exist). fopen returns NULL
//Create an if statement with condition that fPointer == NULL
//CODE:

//Call a printf() to display error message.
//CODE:
	
//return 1 to signal program ended due to error.
//CODE:

//Declare uninitialized char array set to 150 elements named singleLine.
//CODE:

//Use a while loop ! NOT operator and feof() ->  arg fPointer.
//CODE:

	//Call fgets() with var singleLine as first arg, total elements,
	//and fPointer var 3rd arg. 
	//CODE:

	//Print line to the file. Check in the program file.
	//Call a puts function with arg of singleLine to console.
	//CODE:

	//Call fclose() with fPointer as the argument.
	//CODE:
}

//The output appears double-spaced because each line in the .txt file ends with a newline character '\n'.
//Since puts() also appends its own newline, each line gets printed with an extra blank line between 