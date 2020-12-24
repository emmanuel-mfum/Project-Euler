#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Problem 5: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int main() {

	vector<unsigned long long int> even;

	//Step 1: Find all the positive numbers evenly divisible by numbers from 1 to 20

	//The upper limit here is 1000000000
	for ( long int i = 1000000000; i > 0; i--) { // will loop across all numbers from 1000000000 to 1

		// Step 2 : Check for evenly divisions
		for (int j = 20; j >= 0; j--) { // checks division for every divisor from 20 to 1

			if (j !=0 && i % j == 0) { // if the division is even
				continue;
			}
			else if (j == 0) { // once j reaches 0, it means all the division from 0 to 20 were even
				even.push_back(i); // add found number into the vector 
				
			}
			else {
				break; // if a division was not evenly
			}


		}

	}

	int result;

	result = *min_element(even.begin(), even.end()); // assign the smallest element in the vector 

	cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is : " << result << endl;



	return 0;
}