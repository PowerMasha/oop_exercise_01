#include <cmath>
#include <iostream>
#include "complex.h"

complex::complex(): arr{0,0} {}

complex::complex(double a,double b): arr{a, b} {}
double PI=3.14159;
double complex::get(int i) {
  return arr[i];
}
void complex::set(double x,double y) {arr[0]=x;arr[1]=y;}
void complex::read(int i){std::cin>>arr[i];}
double complex::per(int i){
double k=cos(arr[i]*PI/180);
if ((arr[i]==90)||(arr[i]==270)){k=0;}
return k;
}
double complex::pir(int i){
double s=sin(arr[i]*PI/180);
if ((arr[i]==0)||(arr[i]==180)){s=0;}
return s;
}
complex complex::add(const complex& rhs) const{
complex sum{0,0};
for(int i = 0; i < 2; ++i){
       sum.arr[i]+=arr[i]+rhs.arr[i];
  }
return sum;
}

complex complex::sub(const complex& rhs) const{
complex raznost{0,0};
for(int i = 0; i < 2; ++i){
       raznost.arr[i]=arr[i]-rhs.arr[i];
  }
return raznost;
}
complex complex::multiply(const complex& rhs) const {
  complex result{0,0};
  for(int i = 0; i < 2; ++i){
       if (i==0) {result.arr[i] += arr[i]*rhs.arr[i];}
	if (i==1){result.arr[i] += arr[i]+ rhs.arr[i];}
    }
return result;
}

complex complex::div(const complex& rhs) const {
  complex result{0,0};
  for(int i = 0; i < 2; ++i){
       if (i==0 && rhs.arr[i]!=0) {result.arr[i] += arr[i] /rhs.arr[i];}
	if (i==1){result.arr[i] += arr[i] - rhs.arr[i];}
  }
return result;
}


