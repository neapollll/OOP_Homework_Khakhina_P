#include "IComplex.h"
#include <iostream>
using namespace std;


int main()
{
	double re1, im1, re2, im2;
	cout << "Enter real part of 1st number" << endl;
	cin >> re1;
	cout << "Enter imaginary part of 1st number" << endl;
	cin >> im1;
	cout << "Enter real part of 2nd number" << endl;
	cin >> re2;
	cout << "Enter imaginary part of 2nd number" << endl;
	cin >> im2;
	IComplex a(re1, im1);
	IComplex b(re2, im2);
	IComplex w(a + b);
	IComplex d(a - b);
	IComplex f(a * b);
	cout << "a=" << a.v[0]<<"+"<<a.v[1]<<"i"<<endl;
	cout << "b=" << b.v[0] << "+" << b.v[1] << "i" << endl;
	cout << "a+b=" << w.v[0] << "+" << w.v[1] << "i" << endl;
	cout << "a-b=" << d.v[0] << "+" << d.v[1] << "i" << endl;
	cout << "a*b=" << f.v[0] << "+" << f.v[1] << "i" << endl;

	return 0;
}
