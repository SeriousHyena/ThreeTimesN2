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
	
	void threeTimesN(int aVal, int& aRef);	//invoke the function
	cout << "The input number is: " << aVal << endl;
	threeTimesN(aVal,  aVal);		//the second argument points to the reference variable (aRef = aVal * 3-different scope) 
									//the first argument point to the local scope variable (int aVal = 5)
	cout <<"The output of the referenced value times the passed value is: " << aVal;
	
	cout << endl << endl;
	 
	return 0;
}

void threeTimesN(int aVal, int& aRef)
{
	aRef = aVal * 3;	
}