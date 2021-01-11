#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <random>
#include <math.h>

using namespace std; 


int main() {
	mt19937 rndm;
	rndm.seed(time(0));
	int Array[100], n;
	cout << "Input n -> ";
	cin >> n;
	cout << "Array: ";
	for (int i = 0; i < n; ++i) {
		Array[i] = rndm() % 1337 - 228;
		cout << Array[i] << ' ';
	}
	cout << '\n';
	int k; 
	cout << "Input k -> ";
	cin >> k;
	for (int i = 0; i < n; ++i) {
		if (Array[i] == k) {
			for (int j = i + 1; j < n; ++j) {
				Array[j - 1] = Array[j];
			}
			n -= 1;
		}
	}
	cout << "Array without first element (k): ";
	for (int i = 0; i < n; ++i) {
		cout << Array[i] << ' ';
	}
	cout << "\nInput k -> ";
	cin >> k;
	k %= n;
	int* TmpArray = new int[k];
	for (int i = 0; i < k; ++i) {
		TmpArray[i] = Array[n-k+i];
	}
	for (int i = n - 1; i >= k; --i) {
		Array[i] = Array[i - k];
	}

	for (int i = 0; i < k; ++i) {
		Array[i] = TmpArray[i];
	}
	delete[] TmpArray;
	cout << "Array after right cyclic shift: ";
	for (int i = 0; i < n; ++i) {
		cout << Array[i] << ' ';
	}

	return 0;
}
