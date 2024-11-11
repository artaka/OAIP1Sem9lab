#include <iostream>
using namespace std;

int main() {
	double a = 8, b = 14, n = 200, h, x = a, s = 0;
	h = (b - a) / n;
	for (x;x < (b - h);x += h) {
		s += h * ((2 + pow(x, 3)) + (2 + pow(x + h, 3)));
		x += h;
	}
	cout << "S=" << s;
}