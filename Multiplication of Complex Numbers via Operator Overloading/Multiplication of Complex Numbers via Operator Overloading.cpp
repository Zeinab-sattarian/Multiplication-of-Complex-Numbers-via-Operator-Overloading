#include <iostream>
#include "Complex.h"

using namespace std;
int main() {
	Complex x;
	Complex y(4.3, 8.2);
	Complex z(3.3, 1.1);

	cout << "x: ";
	x.print();

	cout << "\ny: " << y;

	cout << "\nz: " << z;

	x = y + z;

	cout << "\n\nx = y + z : " << x << endl;

	x = y - z;

	cout << "\n\nx = y - z : " << x << endl;

	x = y * z;

	cout << "\n\nx = y * z : " << x << endl;
}
