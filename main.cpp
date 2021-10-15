/*
*File name: ThreeTimesN2
* -> Create a function called threeTimesN
* -> It takes two integer parameters
* -> first parameter, input is an integer passed by value
* -> The second parameter, output is an integer passed by reference
* -> Store the input, multiply by three into the output variable
* -> call the function and print the results
*/

#include <iostream>

using namespace std;

//Declare functions
void threeTimesN(int aVal, int& aRef );


//Declare variables
int aVal = 5;

int main()
{
	
	void threeTimesN(int aVal, int& aRef);
	threeTimesN(aVal,  aVal);
	cout << aVal * aVal;
	 
	return 0;
}

void threeTimesN(int aVal, int& aRef)
{
	aRef = 100;
	int refOutput = aVal * aRef;
	
}