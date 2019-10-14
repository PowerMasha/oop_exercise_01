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
void complex::read(std::istream& is) {
for (int i=0; i<2; ++i){
	is >> arr[i];}
}
void complex::write(std::ostream& os) const{
	os << arr[0] <<"*(cos("<< arr[1] <<")+i*sin("<< arr[1] <<")";
}
double complex::cosi()const{
double k;
if (arr[1]==90 || arr[1]==270){ k=0;} else{ k=arr[0]*cos(arr[1]*PI/180);}
return k;
}
double complex::sini()const{
double s;
if (arr[1]==0 || arr[1]==180) {s=0;}else {s=arr[0]*sin(arr[1]*PI/180);}
return s;
}
complex complex::add(const complex& rhs) const{
complex sum{0,0};
double x1 = this->cosi();
double y1 = this->sini();
double x2 = rhs.cosi();
double y2 = rhs.sini();
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
double y2 = rhs.sini();
double x=x1-x2;
double y=y1-y2;

        raznost.arr[0]=std::sqrt(x*x+y*y);
	raznost.arr[1]=atan2(y,x);

return raznost;
}
complex complex::multiply(const complex& rhs) const {
  complex result{0,0};
       result.arr[0] = arr[0]*rhs.arr[0];
	result.arr[1] = arr[1]+ rhs.arr[1];
std::cout << result.arr[0]<<"*(cos("<<result.arr[1]<<")+i*sin("<<result.arr[1]<<"))";
return result;
}

complex complex::div(const complex& rhs) const {
  complex result{0,0};
 if (rhs.arr[0]!=0) {result.arr[0] =(arr[0])/rhs.arr[0];}
	result.arr[1] = arr[1] - rhs.arr[1];
std::cout << result.arr[0]<<"*(cos("<<result.arr[1]<<")+i*sin("<<result.arr[1]<<"))";
return result;
}
void complex::equ(const complex& rhs) const {
int k=0;
int l=0;
if (arr[0]==rhs.arr[0]){k=1;} else {k=0;}
if (arr[1]==rhs.arr[1]){l=1;} else {l=0;}
if(k==1){std::cout << "Длины равны\n";} else {std::cout << "Длины не равны\n";}
if(l==1){std::cout << "Углы равны\n";} else {std::cout << "Углы не равны\n";}
}

complex complex::sopr(){
complex sop{0,0};
sop.arr[0]=arr[0];
sop.arr[1]=-arr[1];
return sop;
}
