#include<iostream>

using namespace std;

// Problem 3 : Find the largest prime factor of the number 600851475143
int main() {

	unsigned long int number = 600851475143;


	while (number % 2 == 0) { // checks if number divides by 2 (if 2 is a factor of the number)
		//cout << 2 << endl;
		number = number / 2;
	}

	for (int i = 3; i <= sqrt(number);  i = i+2) { // starting from 3 until the square root of the number

		while (number % i == 0) { // if number is divisible by i, print i , set number to the quotient of number/i and 
			//check again if it is divisible by the same number
			//cout << i << endl;
			number = number / i;
		}

		 // if not increment i by 2 and check again for divisibility
	}

	if (number > 2) { // if the number is greater than 2, but already a prime
		//cout << number << endl;
		cout << "The largest prime factor is : " << number << endl;
	}



	return 0;
}