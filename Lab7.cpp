#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std; 

bool equation(double m) {
	return m - (1.0 / (3.0 + sin(3.6 * m))) >= 0;
}

double eps = 1e-07;

int main() {
	double l = 0, r = 0.85;
	while (r - l > eps) {
		double m = (r + l) / 2.0;
		if (equation(m)) {
			r = m;
		}
		else l = m;
	}
	cout << setprecision(6) << fixed;
	cout << (r + l) / 2.0;

	return 0;
}
