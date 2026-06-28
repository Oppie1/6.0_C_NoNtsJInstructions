#include<stdio.h>
#include<stdlib.h>


//Create global void function print something.
//CODE:

//Declare global int var named tortillasOutsideMain initialized to 3.
//CODE:

int main() {

	//Declare int local variable tortillasInsideMain initialized to 23.
	//CODE:

	//Call print function to make sentence that accesses the variable you just created (local)
	//CODE:

	//Call printf() and make sentence that uses global variable.
	//CODE:

	//Call the global function outside main()
	//CODE:

//If uncommented these would reference variableInFunction, a local to printSomething()
//printf("Can't use printSomething() var alone outside main. It is that functions local var %d", variableInFunction);
}


//Define void function prototype for this program.
//CODE:

	//Declare local int var variableInFunction initialized to 7
	//CODE:

	//Call printf() to demonstrate with sentence and global var outside main.
	//CODE:

	//Call printf() with sentence and the local var to demonstrate this concept.
	//CODE:

//PrintSomething() cannot use variables located inside main. Only global and local to itself.