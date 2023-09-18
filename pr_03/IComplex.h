#ifndef ICOMPLEX_H
#define ICOMPLEX_H

class IComplex
{
private:
public:
    double v[2];

    IComplex();
    IComplex(const IComplex& v);
    IComplex(double a, double b);

    IComplex operator+(IComplex c2);
    IComplex operator-(IComplex c2);
    IComplex operator*(IComplex c2);
    //IComplex& operator=(const IComplex& v);
};
#endif 