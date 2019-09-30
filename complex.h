#ifndef D_COMPLEX_H
#define D_COMPLEX_H
#include <iostream>
#include <cmath>

struct complex {
double a;
double b;
complex(double a,double b);
complex ();
  complex add(const complex& rhs) const;
  complex multiply(const complex& rhs) const; 
  complex sub(const complex& rhs) const;
 complex div(const complex& rhs) const;


double get(int i);
double per(int i);
double pir(int i);
void set(double x,double y);
void read(int i);

private:
  double arr[2];
};
#endif // D_COMPLEX_H
