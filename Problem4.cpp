#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

//Problem 4: Find the largest pallindrome made from the product of two 3-digit numbers

// We are looking at 3-digit numbers, which means we are looking at a range of numbers going from 100 to 999



bool isAPalindrome(int n) {

	int reverse = 0;
	int number = n;
	while (number > 0) {
		int last = number % 10; // takes up the last digit of the integer "number"
		reverse = (reverse * 10) + last; // reverse gains a digit made up of the integer "last"
		number = number / 10; // number loses one digit after such a division
	}

	if (n == reverse) {
		return true;
	}
	else {
		return false;
	}
	
}

int main() {

	//Step 1 : Generate products of 3-digit numbers

	vector<int>p;
	for (int i = 999; i >= 100; i--) {

		for (int j = 999; j >= 100; j--) {

			int product = i * j;

			//Step 2: Check to see if the product is a palindrome
			bool palindrome = isAPalindrome(product);


			//Step 3: If the product is indeed a palindrome, we add it into a vector
			if (palindrome) {
				p.push_back(product);
			}

		}

		
	}
	
	//Step 4: Within the vector made up of palindrome integers, find the largest element
	int result;
	result = *max_element(p.begin(), p.end());

	cout << "The largest pallindrome made from the product of two 3-digit numbers is : " << result << endl;
	
		

	return 0;
}