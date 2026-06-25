#include<stdio.h>
#include<string.h>
#include<ctype.h>





int main() {


	//Declare char array soy with 100 elements initialized to "Hey ".
	//CODE:
	char soy[100] = "Hey ";

	//Use a strcat_s() with the 3 arguments "soy", sizeof() with var arg and arg "Adam ".
	//CODE:
	strcat_s(soy, sizeof(soy), " Adam");

	//Use strcat_s again along with the same logic above for the 3
	//arguments to place "you ".
	//CODE:

	//Use strcat_s along with the same logic and continue a sentence.
	//CODE:
	strcat_s(soy, sizeof(soy), " program");

	//Use the printf() display sentence to screen.
	//CODE:
	printf("Hello, here is your sentence: %s", soy);

	//Use system() function with "cls" as arg to clear buffer.
	//CODE:
	system("cls");

	//Use memset() function with soy arg, 0, and then EXACT number of slots we are filling.
	//CODE:
	memset(soy, 0, sizeof(soy));

	printf("\n\n---Next strcpy_s Example---\n");

	//Use strcpy_s with same logic as strcat_s but use a sentence in last arg like "Adam is a person" in third slot.
	//CODE:
	strcpy_s(soy, sizeof(soy), " Adam is a person");

	//Now print that sentence to the screen.
	//CODE:
	printf("The sentence is %s: ", soy);

	printf("\n---toupper() example---: \n");

	//Declare 3 char variables a, b, c and initialize them to 'b', 'F','7' respectively
	//CODE:
	char a = 'b';
	char b = 'F';
	char c = '7';

	//Use printf()s with appropriate functions and access specifiers to show all 3 cases and how to make 'a' uppercase.
	//CODE:
	printf("The appropriate for char a is: %c\n", isuppper(a));
	printf("The appropriate for char b is: %c\n", isupper(b));
	printf("The app for char c is: %c\n", isupper(c));

}