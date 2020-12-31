#include<iostream>
#include<vector>
#include <cmath>



using namespace std;


//Problem 9: There exists exactly one Pythagorean triplet for which a + b + c = 1000.Find the product abc.


int main() {

	//Step 1 : Generate Pythagorean triplets. The goal is to generate them using Euclid's formula
	// In this solution, "j" corresponds to "m" in the formula and "i" corresponds to the "n" in the formula

	bool found = false; // set to false initially

	for (int i =  1; i < 100; i++) {

		for (int j = 2; j < 100; j++) {


						int a = (pow(j, 2)) - (pow(i, 2));// calculate i
						int b = 2 * i * j; // calculate b
						int c = (pow(j, 2)) + (pow(i, 2)); // calculate c
						int sum = a + b + c; // calculate the sum

						//Prints out a,b,c and their sum
						cout << a << endl;
						cout << b << endl;
						cout << c << endl;
						cout << sum << endl;
						cout << endl;

						//Step 2:  if the sum found above is equal to 1000, we stop and exits the two loops
						if (sum == 1000) { 

							
							cout <<"The term a is " << a << endl;
							cout << "The term b is " << b << endl;
							cout <<"The term c is " << c << endl;
							cout << (pow(a, 2) + pow(b, 2)) << " = " << pow(c, 2) << endl;

							found = true; // boolean flag is set to true
							break; // exits the inner loop
						}

		
		
		}

		if (found) { // if the flag is true, exit the outer loop
			break;
		}
	}


	return 0;
}