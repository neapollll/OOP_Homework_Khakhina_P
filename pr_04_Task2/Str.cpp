#include <iostream>
#include <string>
#include <math.h>

using namespace std;

template<typename T>
class Str
{
public:
	Str() {};
	~Str() {};

	T sum(T& x, T& y) { return x + y; };
	T comp(T& x, T& y)
	{
		if (x == y)
		{
			cout << x << "=" << y << endl;
			return x;
		}
		else {
			if (x > y)
				return x;
			else
				return y;
		}
	}
	int strToInt(string);
};

template <>
string Str<string>::comp(string& x, string& y)
{
	if (x.length() == y.length())
	{

		if (strToInt(x) > strToInt(y))
			return x;
		else
			return y;
	}
	else
	{
		if (x.length() > y.length())
			return x;
		else
			return y;
	}
}

template <typename T>  
int Str<T>::strToInt(string str)
{
	int res = 0;
	for (int i = 0; i < str.length(); i++)
	{
		res = res + str[i] * pow(10, str.length() - i);
	}
	return res;
}
template<> 
string Str<string>::sum(string& x, string& y)
{
	return x + y;
};
int main()
{
	Str<string> str0;
	Str<int> i0;
	Str<double> d0;
	
	string str1 = "BA", str2 = "AB";
	int i1 = 1, i2 = 2;
	double d1 = 5, d2 = 6;

	cout << "The first string: " << str1 << endl;
	cout << "The second string: " << str2 << endl;
	cout << "Length of " << str1 << " = " << str1.length() << endl;
	cout << "Length of " << str2 << " = " << str2.length() << endl;
	cout << str1 << " to int: " << str0.strToInt(str1) << endl;
	cout << str2 << " to int: " << str0.strToInt(str2) << endl;
	cout << "Sum of string: " << str1 << " + " << str2 << " = " << str0.sum(str1, str2) << endl;
	cout << "Comparing string: " << str1 << " and " << str2 << " : " << str0.comp(str1, str2) << " is greater" << endl;
	cout << endl;

	cout << "The first int: " << i1 << endl;
	cout << "The second int: " << i2 << endl;
	cout << "Sum of int: " << i1 << " + " << i2 << " = " << i0.sum(i1, i2) << endl;
	cout << "Comparing int: " << i1 << " and " << i2 << " : " << i0.comp(i1, i2) << " is greater" << endl;
	cout << endl;

	cout << "The first double: " << d1 << endl;
	cout << "The second double: " << d2 << endl;
	cout << "Sum of double: " << d1 << " + " << d2 << " = " << d0.sum(d1, d2) << endl;
	cout << "Comparing double: " << d1 << " and " << d2 << " : " << d0.comp(d1, d2) << " is greater" << endl;
	return 0;
}
