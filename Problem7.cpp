#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


// Problem 7 : What is the 10 001st prime number?

int main() {

	vector<int> primes; // vector to hold prime numbers

	// Step 1 : Generate prime numbers and store them into a vector

	for (int i = 2; i <= 1000000; i++) { // the loop is going to check and find all prime numbers between 2 and 1000000
		bool prime = true; // boolean flag set to true ( we assume the current number "i" is prime)
		int n = 2;

		/* 
		* Step 2: Check for the primality of each number "i"
		The algorithm used to find the prime numbers here is trial division where we test whether a number "i" is a 
		* multiple of of any integer between 2 and sqrt(i). If there is such multiple, this means that "i" is not a prime number
		*/
		for (int j = n; j <= sqrt(i); j++) {

			if (i % j == 0) { // if a multiple is found via the modulo operation
				prime = false; // flag is set to false
				break;
			}
			else {
				continue;
			}
			
		}

		/*
		Step 3: If the number is a prime add it to the vector
		*/
		if (prime) { // check for the value of the flag after the iterations of the inner for loop
			primes.push_back(i); // if we reach this point it meant that "i" was a prime, we add it into the vector
		}
		
	}



	cout << " The 10 001st prime number is : " <<  primes.at(10000) << endl; 
	/*
	the number used is 10000 not 10001 as in our vector the indices start at 0, so the 100001 prime will occupy the index 10000
	*/ 


	return 0;
}