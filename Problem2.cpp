#include<iostream>
#include<vector>

using namespace std;


// Problem 2 : Find the sum of even valued terms of a Fibonacci sequence below 4 millions



int main() {

	// Step 1 : Generate a Fibonacci sequence

	int a = 1;
	int b = 2;
	int sum;

	
	double evensum = 0.00;

	for (int i = 0; i < 4000000; i++) {

		//Step 2 : To check for even values
		if (a % 2 == 0) {
			evensum += a; 		// Step 3 : Find the sum of all even values

		}
		
		sum = a + b;
		a = b;
		b = sum;
		
	
	}

	cout << "The sum of the even-valued terms of a Fibonacci sequence that does not exceed 4 million : " << evensum << endl;




	return 0;
}




