#include<vector>
#include<iostream>

using namespace std;


//Problem 12 : What is the value of the first triangle number to have over five hundred divisors?

int main() {

	int number = 0;
	int tempnumberOfDivisors = 0; // set a counter for the number of divisors
	int numberOfDivisors = 0;

	//Step 1 : To generate triangle numbers

		for (int i = 1; i < 110000; i++) { // goes number by number in the triangle number sequence

			number = 0;
			for (int j = 1; j <= i; j++) { // calculates the actual number

				number += j;
			}

			// Step 2 : Check the number of divisors for that triangle number
			for (int k = 1; k <= number; k++) {


				if (number % k == 0) {
					tempnumberOfDivisors++; // increment the counter for each division without remainder
				}

				if (tempnumberOfDivisors > numberOfDivisors) {
					numberOfDivisors = tempnumberOfDivisors; // assign value
				}
				
			}

			tempnumberOfDivisors = 0;

			//Step 3: Once the number of divisors has reached above 500, prints the number and the number of divisors

			if (numberOfDivisors > 500) {

				cout << "The first triangle number to have over five divisors is : " << number << endl;
				cout << "The number of divisors is : " << numberOfDivisors << endl;

				break;
			}
			else {
				cout << number << endl;
				cout << numberOfDivisors << endl;
			}
		}
	

		// Highest number with over 500 divisors is : 76576500
		// Number of divisors : 576

	return 0;
}