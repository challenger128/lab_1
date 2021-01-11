#include <iostream>

using namespace std; 

double eps = 1e-4;

int main() {
	double sum = 0;
	double an = 10;
	int k = 1;
	while (an >= eps) {
		sum += an;
		an *= 10;
		an /= 1.0 * (k + 1);
		k++;
	}
	cout << sum;

	return 0;
}
