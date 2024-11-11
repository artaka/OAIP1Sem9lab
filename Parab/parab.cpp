#include <iostream>
using namespace std;

int main() {
	double a = 8, b = 14, h, x, s1 = 0, s2 = 0, s;
	int n = 200, i = 1;
	h = (b - a) / (2*n);
	x = a + 2 * h;
	for (i;i < n;i++) {
		s2 += 2 + pow(x, 3);
		x += h;
		s1 += 2 + pow(x, 3);
		x += h;
	}
	s = (h / 3) * ((2 + pow(a, 3)) + 4 * (2 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (2 + pow(b, 3)));
	cout << "S=" << s;
}