#include<iostream>


using namespace std;

// Problem 10 : Find the sum of all the primes below two million.

int main() {

	unsigned long long int sum = 0;

	for (int i = 2; i < 2000000; i++) {

		bool prime = true;

		//Step 1 : Check for primality

		for (int j = 2; j <= sqrt(i); j++) {// check to see if there is a multiple of i between 2 and square root of i

			if (i % j == 0 && j != i) { // checks to see if there if j is a multiple of i and j is not equal to i
				prime = false;
				break;
			}
		}

		
		if (prime) {
			sum += i;
		}
		else {
			continue;
		}

	}


	cout << "The sum of the primes is :" << sum << endl;


	return 0;

}