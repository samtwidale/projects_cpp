#include <iostream>
using namespace std;

void main() {
	int a = 2, b = -5, c = 11; 

	c = 4 * a - b + 2 * c;
	
	cout << "Sam is cool" << endl;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	c = a + b;
	cout << "c = a + b = " << c << endl;


	system("pause");//stop console from closing
}