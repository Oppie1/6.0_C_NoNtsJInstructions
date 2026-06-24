#include<stdio.h>
#include<stdlib.h>	


int main() {

	//Declare an uninitialized int variable called "age" to hold the user's input.
	//CODE:
	int age;

	//Call a print() to a prompt the user for their age. 
	//CODE:
	printf("Please enter your age:\n");

	//scanf_s user input into age.
	//CODE:
	scanf_s("%d", &age);

	//Use an if statement to validate whether person is greater than or equal to 18.
	//and call a print() to declare website entry.
	//CODE:
	if (age >= 18) {

		printf("You may enter website.");

	}
	//Create an if statement that checks if they are under 18 along with denial message.
	//CODE:
	if (age < 18) {

		printf("You may not enter this website");
	}


}