#include <iostream>

using namespace std; 


int main() {
	float a1, b1;
	cout << "Input a,b -> ";
	cin >> a1 >> b1;
	cout << "result as float =" << ((a1 + b1) * (a1 + b1) * (a1 + b1) * (a1 + b1) -
		(a1 * a1 * a1 * a1 + 4 * a1 * a1 * a1 * b1)) / (6 * a1 * a1 * b1 * b1 + 4 * a1 * b1 * b1 * b1
			+ b1 * b1 * b1 * b1) << '\n';
	double a2, b2;
	cout << "Input a,b -> ";
	cin >> a2 >> b2;
	cout << "result as double =" << ((a2 + b2) * (a2 + b2) * (a2 + b2) * (a2 + b2) -
		(a2 * a2 * a2 * a2 + 4 * a2 * a2 * a2 * b2)) / (6 * a2 * a2 * b2 * b2 + 4 * a2 * b2 * b2 * b2
			+ b2 * b2 * b2 * b2) << '\n';


	return 0;
}
