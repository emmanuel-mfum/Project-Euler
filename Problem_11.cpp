#include<iostream>

using namespace std;

int main() {

	const int size = 20;
	int matrix[size][size];

	//Step 1 : Fill the 2D array with values manually

	for (int y = 0; y < size; y++) {

		for (int x = 0; x < size; x++) {

			cout << "Please enter a number :" << endl;
			cin >> matrix[x][y];
		}
	}


	//Step 2 : Evaluate the product of four adjacent numbers in all directions

	int product = 0;


	//Iterate over the entire array
	for (int y = 0; y < size; y++) {

		for (int x = 0; x < size; x++) {

			//ALways check if there are enough neighboring cells to the current cell we are at
			if (x + 3 < size) { // three more horizontal cells (right)

				int tempProduct = matrix[x][y] * matrix[x + 1][y] * matrix[x + 2][y] * matrix[x + 3][y];

				if (product < tempProduct) { // if the product found is bigger than the previous one found
					product = tempProduct;
				}
			}

			if (y + 3 < size) { // goes down by three cells

				int tempProduct = matrix[x][y] * matrix[x][y + 1] * matrix[x][y + 2] * matrix[x][y + 3];

				if (product < tempProduct) {
					product = tempProduct;
				}
			}

			if (x < size && y < size) { // right down diagonally

				int tempProduct = matrix[x][y] * matrix[x + 1][y + 1] * matrix[x + 2][y + 2] * matrix[x + 3][y + 3];


				if (product < tempProduct) {
					product = tempProduct;
				}
			}

			if (x < size && y >= 3) { // left-down diagonally

				int tempProduct = matrix[x][y] * matrix[x + 1][y - 1] * matrix[x + 2][y - 2] * matrix[x + 3][y - 3];


				if (product < tempProduct) {
					product = tempProduct;
				}
			}

		}
	}



	cout << " The greatest product of four adjacent numbers in the same direction : " << product << endl;

	return 0;
 }
