/*
 * Calculator.cpp
 *
 *  Date: [3/24]
 *  Author: [Chris Gramer]
 */

#include <iostream>

using namespace std;

int main() //changed to int. Haven't seen void in any of our work
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer ='Y'; //added semicolon and the initialized with 'Y' vs "Y"

	while (answer=='y' || answer == 'Y') // can be case sensitive so inserted the or to read capital or lower case y
	{
		cout << "Enter expression" << endl;
		cin >> op2 >> operation >> op1;
        //removed semicolon after if statements and added '{ }'
		if (operation == "+") { 
            //there was a '>>' when there should have been '<<'
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        }

		if (operation == '-') {
            //again, there was a '>>' when there should have been '<<'
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        }

    	if (operation == '*') {
            //added ; to the end of the statement
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl;
        }

		if (operation == '/') {
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;
        }

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}

    //added return
    return 0;
}
