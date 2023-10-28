#include <iostream>

using namespace std;

template <typename Type> Type sum_t(Type a, Type b) {
    return a + b;
}

template <typename Type> Type difference_t(Type a, Type b) {
    return a - b;
}

template <typename Type> Type multiplication_t(Type a, Type b) {
    return a * b;
}

template <typename Type> Type division_t(Type a, Type b) {
    return a / b;
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

double difference(double a, double b) {
    return a - b;
}

float difference(float a, float b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

double multiplication(double a, double b) {
    return a * b;
}

float multiplication(float a, float b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

double division(double a, double b) {
    return a / b;
}

float division(float a, float b) {
    return a / b;
}

int main()
{
    int a = 10, b = 5;
    //double a = 52.44, b = 114.45;
    //float a = 17.4, b = 52.3;
    cout << "First number:" << a << "\nSecond number:" << b << endl << endl;

    cout << "Template functions:" << endl;
    cout << "sum: " << sum_t(a, b) << endl;
    cout << "difference: " << difference_t(a, b) << endl;
    cout << "multiplication: " << multiplication_t(a, b) << endl;
    cout << "division: " << division_t(a, b) << endl << endl;

    cout << "Overloaded functions:" << endl;
    cout << "sum: " << sum(a, b) << endl;
    cout << "difference: " << difference(a, b) << endl;
    cout << "multiplication: " << multiplication(a, b) << endl;
    cout << "division: " << division(a, b) << endl;


    return 0;
}