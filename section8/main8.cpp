// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    int dollar{100};
    int quarter{25};
    int dime{10};
    int Nickel{5};
    int Penny{1};
	int cent{0};

	cout << "Pls enter how many money : ";
    cin >> cent ;
    
    int numdollars = cent / dollar;
    cent = cent % dollar;

    int numquarter = cent / quarter;
    cent = cent % quarter;

    int numdime = cent / dime;
    cent = cent % dime;

    int numnickel = cent / Nickel;
    cent = cent % Nickel;

    int numpenny = cent / Penny;
    cent = cent % Penny;
    
    
    cout << "dollar :" << numdollars << endl;
    cout << "quarter :" << numquarter << endl;
    cout << "dime :" << numdime << endl;
    cout << "Nickel :"<< numnickel << endl;
    cout << "Penny :" << numpenny << endl;

    cout << endl;
    return 0;
}


