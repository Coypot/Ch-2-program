// Ch 2 Program - Purchase
#include <iostream>
using namespace std;

int main()
{
	system("clear");

	// NOTE:  Make sure you put the correspdonding code under the right comment.
	// Points will be deducted if this is not done.

	// Step #1:  Declare 5 variables that will have a double datatype:
	//   itemOne stores 15.95, itemTwo stores 24.95, itemThree stores 6.95, itemFour stores 12.95, and itemFive stores 3.95
	double itemOne = 15.95;
	double itemTwo = 24.95;
	double itemThree = 6.95;
	double itemFour = 12.95;
	double itemFive = 3.95;

	// Step #2:  Declare 3 more variables named subtotal, taxAmount, and total
	//   Their data type should also be double since they will have decimal points
	//   We don't have values for them yet.
    double subtotal;
	double taxAmont;
	double total;

	// Step #3:  Declare a constant for the tax rate.
	//   See page 73 to read about constants.
	//   It will be a double data type and will hold the value .07
	//   Remember that constants are named with ALL_CAPS and use an underscore
	//   to separate words.
	const double TAX_RATE = 0.07;

	// Step #4:  set the subtotal variable to be equal to all 5 items added together
	//   Use variables for the items, don't type in their values
	subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
	// Step #5:  set the taxAmount variable to be equal to
	//   the subtotal multiplied by the tax rate variable
	//   Again - use variables - not typed in numbers
	taxAmont = subtotal * TAX_RATE;

	// Step #6:  set the total variable to be equal to the
	//   subtotal plus the taxAmount (from Step #5).
	//   Again - use variables not typed in numbers
	total = subtotal + taxAmont;
	// Step #7:  output the values to the screen using cout statements.
	//   Make sure you use variables wherever possible in your cout statements
	//   Make sure your output matches the sample output.
	cout << "Itemone: " << itemOne << endl;
	cout << "Itemtwo: " << itemTwo << endl;
	cout << "Itemthree: " << itemThree << endl;
	cout << "Itemfour: " << itemFour << endl;
	cout << "Itemfive: " << itemFive << endl;
	cout << "Subtotal: " << subtotal << endl;
	cout << "Tax: " << taxAmont << endl;
	cout << "Total: " << total << endl;

		return 0;
}
