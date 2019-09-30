#include <cmath>
#include <iostream>
#include "complex.h"

complex::complex(): arr{0,0} {}

complex::complex(double a,double b): arr{a, b} {}
double PI=3.1415926535;
double complex::get(int i) {
  return arr[i];
}
void complex::set(double x,double y) {arr[0]=x;arr[1]=y;}
void complex::read(std::istream& is){
for (int i=0; i<2; ++i){
	is >> arr[i];}
}
double complex::cosi()const{
double k;
if (arr[1]==90 || arr[1]==270){ k=0;} else{ k=arr[0]/cos(arr[1]*PI/180);}
return k;
}
double complex::sini()const{
double s;
if (arr[1]==0 || arr[1]==180) {s=0;}else {s=arr[0]/sin(arr[1]*PI/180);}
return s;
}
complex complex::add(const complex& rhs) const{
complex sum{0,0};
double x1 = this->cosi();
double y1 = this->sini();
double x2 = rhs.cosi();
double y2 = rhs.cosi();
double x=x1+x2;
double y=y1+y2;

       sum.arr[0]=std::sqrt(x*x+y*y);
	sum.arr[1]=atan2(y,x);
	
return sum;
}

complex complex::sub(const complex& rhs) const{
complex raznost{0,0};
double x1 = this->cosi();
double y1 = this->sini();
double x2 = rhs.cosi();
double y2 = rhs.cosi();
double x=x1-x2;
double y=y1-y2;

        raznost.arr[0]=std::sqrt(x*x+y*y);
	raznost.arr[1]=atan2(y,x);

return raznost;
}
complex complex::multiply(const complex& rhs) const {
  complex result{0,0};
       result.arr[0] += arr[0]*rhs.arr[0];
	result.arr[1] += arr[1]+ rhs.arr[1];
return result;
}

complex complex::div(const complex& rhs) const {
  complex result{0,0};
       if (rhs.arr[0]!=0) {result.arr[0] += arr[0] /rhs.arr[0];}
	{result.arr[1] += arr[1] - rhs.arr[1];}
return result;
}


