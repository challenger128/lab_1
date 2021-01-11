#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <random>
#include <math.h>

using namespace std; 

int** CreateMatrix(int n) {
	int** res = new int* [n];
	mt19937 rndm;
	rndm.seed(time(0));
	for (int i = 0; i < n; ++i) {
		res[i] = new int[n];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			res[i][j] = rndm() % 228;
		}
	}
	return res;
}

void PrintMatrix(int** Matrix, int n) {
	cout << '\n';
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << Matrix[i][j] << ' ';
		}
		cout << '\n';
	}
}

// Сумма элементов матрицы ниже главной диагонали, включая её. 


int Sum(int** Matrix, int n) {
	int res = 0;
	for (int i = n-1; i > -1; --i) {
		for (int j = 0; j < i + 1; ++j) {
			res += Matrix[i][j];
		}
	}
	return res;
}


int main() {
	cout << "Input n -> ";
	int n; 
	cin >> n;
	int*** MatrixArray;
	MatrixArray = new int** [n];
	cout << "Input k -> ";
	int k;
	cin >> k;
	int MaxSum = 0;
	for (int i = 0; i < n; ++i) {
		MatrixArray[i] = CreateMatrix(k);
		PrintMatrix(MatrixArray[i], k);
		int sum = Sum(MatrixArray[i], k);
		MaxSum = (sum > MaxSum ? sum : MaxSum);
	}
	cout << "\nMaxSum = " << MaxSum;
	

	return 0;
}
