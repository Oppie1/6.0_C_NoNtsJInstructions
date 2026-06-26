#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Call srand() with time() arg NULL
	//CODE:
	srand(time(NULL));

	//Declare 3 uninitialized int vars. A loop counter i, temp and swap.
	//CODE:
	int i, temp, swapped;

	//Declare int howMany initialized to 3.
	//CODE:
	int howMany = 3;

	//Declare uninitialized goals array with 3 elements.
	//CODE:
	int goals[3];

	//Create a for loop that starts i at 0, i is less than how many, then increment 1
	//CODE:
	for (i = 0; i < howMany; i++) {

		goals[i] = (rand() % 10) + 1;

	}

	//Assign current position of goals array to rand() with no args % 10. Humanize it.
	//CODE:

	printf("Original List\n");
	//Create for loop match above for loop to print info to screen.
	//CODE:

	//Call printf() to show goals at given positions to screen.
	//CODE:

	//Create while loop with 1 as parameter.
	//CODE:

	//Initialize swapped variable to 0.
	//CODE:

	//Create for loop to humanize it to order last element.
	//CODE:

	//Use a nested if statement to see if the current element goal[i]
	//is greater than next element of goal[i] -> goal[i + 1]
	//CODE:

	//Assign temp var to the current goals[i].
	//CODE:

	//Assign current element goals[i] to next position i + 1.
	//CODE:

	//Assign next element to value stored in temp.
	//CODE:

	//Set swapped = 0 to 1 here within if statement.
	//CODE:

	//Use if statement to see if swapped variable equals 0. break.
	//CODE:

	printf("\nSorted List\n");

	//Use for loop to match first for loop you created in unsorted list. Should produce a sorted list.
	//CODE:

	//Use the same format for print statement.
	//CODE:

}