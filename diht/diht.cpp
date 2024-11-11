#include <iostream>
using namespace std;

int main() {
	double a = 0, b = 3, e = 1e-4, x = 0;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (((exp(x) + x - 4) * (exp(a) + a - 4)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x;
}