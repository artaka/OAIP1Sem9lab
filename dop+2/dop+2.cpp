#include <iostream>
using namespace std;

int main() {
	double pi=3.14159265359,a = -pi, b = 0, e = 1e-4, x = 0;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (((sin(x) + x + 2) * (sin(a) + a +2)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x;
}