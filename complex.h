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
 void equ(const complex& rhs) const;
complex sopr();

  void read(std::istream& is);
  void write(std::ostream& os) const;

double get(int i);
double cosi()const;
double sini()const;
void set(double x,double y);

private:
  double arr[2];
};
#endif // D_COMPLEX_H
