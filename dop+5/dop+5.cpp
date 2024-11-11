#include <iostream>
using namespace std;

int main() {
	double pi = 3.14159265359, a = pi, b = 3*pi, e = 1e-4, x = 0;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (((cos(x) + x -7) * (cos(a) + a -7)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x;
}