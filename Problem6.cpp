#include<iostream>
#include<vector>

using namespace std;

//Problem 6 : Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.



int main() {

	//Step 1: Calculate the sum of the squares of the first one hundred natural numbers

	int sumOfSquares = 0 ;

	for (int i = 1; i <= 100; i++) {

		sumOfSquares += (i * i);
	}

	//Step 2: Calculate the square of the sum of the first one hundred natural numbers.

	int sum = 0;

	for (int i = 1; i <= 100; i++) {

		sum += i;
	}

	int square = (sum * sum);

	//Step 3: Calculate the difference between the between the sum of the squares of the first one hundred natural numbers and the square of the sum.

	int difference = square - sumOfSquares;

	cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is : " << endl;
	cout << difference << endl;


	return 0;
}