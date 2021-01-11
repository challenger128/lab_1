#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std; 

double eps = 1e-4;

int main() {
	double a = 0.1, b = 0.8;
	double h = (b - a) / 10.0;
	double eps = 0.0001;
	int n = 3;
	cout << setprecision(9) << fixed;
	for (double x = a; x <= b; x += h) {
		double sum = 0;
		double ch = x; 
		double zn = 1.0;
		for (int i = 1; i <= n; ++i) {
			sum += ch / zn;
			ch *= (x * x * x * x);
			zn += 4.0;
		}
		cout << x << '\t' << sum;
		sum = 0;
		ch = x;
		zn = 1.0;
		while (ch / zn >= eps) {
			sum += ch / zn;
			ch *= (x * x * x * x);
			zn += 4.0;
		}
		cout << '\t' << sum << '\t' << 0.25 * log((1 + x) / (1 - x)) + 0.5 * (atan(x)) << '\n';
	}
	return 0;
}
