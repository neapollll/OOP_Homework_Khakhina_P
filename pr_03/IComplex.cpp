#include "IComplex.h"
/*
class IComplex
{
private:
public:
    double v[2];

    IComplex();
    IComplex(const IComplex& v);
  

    IComplex operator+(IComplex c2);
    IComplex operator-(IComplex c2);
    IComplex operator*(IComplex c2);
    //IComplex& operator=(const IComplex& v);
};*/

IComplex::IComplex()
{

};
 
IComplex::IComplex(const IComplex& c2)
{
    v[0] = c2.v[0];
    v[1] = c2.v[1];
};

IComplex::IComplex(double a, double b)
{
    v[0] = a;
    v[1] = b;
};

IComplex IComplex::operator+(IComplex c2)
{
    double re, im;
    re = v[0] + c2.v[0];
    im = v[1] + c2.v[1];
    IComplex res;
    res.v[0]=re; 
    res.v[1] = im;
    return res;
};

IComplex IComplex::operator-(IComplex c2)
{
    double re, im;
    re = v[0] - c2.v[0];
    im = v[1] - c2.v[1];
    IComplex res;
    res.v[0] = re;
    res.v[1] = im;
    return res;
};

IComplex IComplex::operator*(IComplex c2)
{
    double re, im;
    re = v[0]* c2.v[0] - v[1] *c2.v[1];
    im = v[0] * c2.v[1] + v[1] * c2.v[0];
    IComplex res;
    res.v[0] = re;
    res.v[1] = im;
    return res;
};
