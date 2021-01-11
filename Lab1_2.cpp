#include <iostream>

using namespace std; 


int main() {
	int n, m, result;
	cout << "Input n,m -> ";
	cin >> n >> m;
	cout << "n = " << n << " " << "m = " << m << '\n';
	result = ++n * ++m;
	cout << "++n*++m = " << result << '\n';
	cout << "n = " << n << " " << "m = " << m << '\n';
	result = m++ < n;
	cout << "m++<n = " << result << '\n';
	cout << "n = " << n << " " << "m = " << m << '\n';
	result = n++ > m;
	cout << "n++>m = " << result << '\n';
	cout << "n = " << n << " " << "m = " << m << '\n';

	return 0;
}
