// matrix operations: add, subtract, hadamard, multiply, transpose
#include<iostream>
using namespace std;

// prints a rows x cols matrix stored row-major in a flat array
void print(const int* m, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << m[i * cols + j] << "\t";
		cout << endl;
	}
}

int main() {
	const int rows = 2, cols = 3;      // x and y are 2x3
	const int rows2 = 3, cols2 = 3;    // b is 3x3 -> (2x3) * (3x3) = 2x3

	int x[rows][cols]   = {1,2,3, 4,5,6};
	int y[rows][cols]   = {7,8,9, 1,2,3};
	int b[rows2][cols2] = {1,2,3, 4,5,6, 7,8,9};

	int sum[rows][cols]      = {0};
	int diff[rows][cols]     = {0};
	int hadamard[rows][cols] = {0};
	int product[rows][cols]  = {0};
	int transpose[cols][rows] = {0};

	// input matrices
	cout << "===== MATRICES =====" << endl;
	cout << "x (" << rows << "x" << cols << "):" << endl;
	print(&x[0][0], rows, cols);
	cout << "y (" << rows << "x" << cols << "):" << endl;
	print(&y[0][0], rows, cols);
	cout << "b (" << rows2 << "x" << cols2 << "):" << endl;
	print(&b[0][0], rows2, cols2);
	cout << endl;

	// addition (+)
	cout << "===== SUM =====" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum[i][j] = x[i][j] + y[i][j];
			cout << sum[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// subtraction (-)
	cout << "===== SUBTRACTION =====" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			diff[i][j] = x[i][j] - y[i][j];
			cout << diff[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// hadamard product (x)
	cout << "===== HADAMARD PRODUCT =====" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			hadamard[i][j] = x[i][j] * y[i][j];
			cout << hadamard[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// matrix multiplication (*)
	cout << "===== MATRIX MULTIPLICATION =====" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols2; j++) {
			for (int k = 0; k < cols; k++) {
				product[i][j] += x[i][k] * b[k][j];
			}
			cout << product[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// transpose of x: 2x3 -> 3x2
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transpose[j][i] = x[i][j];
		}
	}
	cout << "===== TRANSPOSE (x) =====" << endl;
	for (int j = 0; j < cols; j++) {
		for (int i = 0; i < rows; i++) {
			cout << transpose[j][i] << "\t";
		}
		cout << endl;
	}

	return 0;
}
