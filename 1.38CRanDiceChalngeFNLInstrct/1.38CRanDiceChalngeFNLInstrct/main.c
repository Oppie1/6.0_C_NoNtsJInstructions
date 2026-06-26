#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

	//Declare 4 uninitialized int vars for the 4 dice rolls.
	//CODE:

	//Declare 2 more uninitialized int variables total and average.
	//CODE:

	//Declare a char variable named userOption.
	//CODE:

	//Call the srand() with the time() with arg set to NULL as the srand() arg.
	//CODE:

	//These are just instructions so do not erase these in just notes file.
	puts("Betting game");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of the 3 dice (total divided by 3) tells you the number between 1-6.");
	puts("Then guess if next roll (4th dice) is higher(h), lower(l) or same(s) as that avg.\n\n");


	//Assign dice roll var (1-3) to an expression with rand() with no parameters and modulus % + 1.
	//CODE:

	//Assign "total" to the the sum of the three dice rolls.
	//CODE:

	//Assign average to the total variable divided by 3
	//CODE:

	//Call printf() with sentence in printing to the screen what each dice roll is.
	//CODE:

	//Display combined total of all 3 dice using.
	//CODE:

	//Print the avg to the screen.
	//CODE:

	puts("\n\nGuess if the next roll is higher(h), lower(l) or same(s) as the average:\n\n");

	//Call a scanf_s() to read in the user option.
	//CODE:

	//Assign diceRoll4 to dice roll formula.
	//CODE:

	//Reveal the result of the 4th dice roll.
	//CODE:	

	//Use if condition that checks if dice roll 4 is greater or 
	//less than, or the same as the avg AND if the entered l, h or s. ==
	//CODE:
	
	//Display if and else statements whether the user guessed right or not to the screen.



	//Display to screen if user selected correctly.
	//CODE:


	//The else block that lets the user know they guessed wrong.
	//CODE:

}