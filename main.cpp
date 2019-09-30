#include <iostream>
#include <cmath>
#include "complex.h"

int main(){
	complex m1;
	complex m2;
printf("Введите первое комплексное число\n");
  for(int i = 0; i < 2; ++i){
    m1.read(i);
    } 
printf("Введите второе комплексное число\n");
  for(int i = 0; i < 2; ++i){
    m2.read(i);
    } 
printf("Первое комплексное число, модуль длины (r)  угол (u)\n");
  for(int i = 0; i < 2; ++i){
    std::cout << m1.get(i)<<' ';
    } 
std::cout << '\n';
printf("Второе комплексное число, модуль длины (r)  угол (u)\n");
  for(int i = 0; i < 2; ++i){
    std::cout << m2.get(i)<<' ';
    }
std::cout << '\n';
//SUMMA
complex res1(0,0);
complex res2(0,0);
double X1=m1.per(1);
double X2=m2.per(1);
double Y1=m1.pir(1);
double Y2=m2.pir(1);
if(X1!=0 && Y1!=0){res1.set(m1.get(0)/X1,m1.get(0)/Y1);}else{
	if(X1==0){res1.set(0,m1.get(0)/Y1);} else {
		res1.set(m1.get(0)/X1,0);	
	}
}
if(X2!=0 && Y2!=0){res2.set(m2.get(0)/X2,m2.get(0)/Y2);}else{
	if(X2==0){res2.set(0,m2.get(0)/Y2);} else {
		res2.set(m2.get(0)/X2,0);	
	}
}
complex sum = res1.add(res2);
std::cout <<'\n';
std::cout << "Координаты вектора суммы:\n";
for(int i = 0; i < 2; ++i){
 std::cout.setf(std::ios::fixed);
 std::cout.precision(2);
  std::cout <<sum.get(i) << ' ';
  		 }	    
std::cout <<'\n';
//Raznost
complex sub = res1.sub(res2);
std::cout<<'\n';

std::cout << "Координаты вектора разности:\n";
for(int i = 0; i < 2; ++i){

  std::cout <<sub.get(i) << ' ';
  		 }	    
std::cout <<'\n';
std::cout.setf(std::ios::fixed);
 std::cout.precision(0);
	complex product = m1.multiply(m2);
  std::cout << "Произведение: \n";
  for(int i = 0; i < 2; ++i){
      if(i==0){std::cout << product.get(i) << "*";}
	if(i==1){std::cout <<"(cos("<< product.get(i) << ")+i*sin("<< product.get(i) << "))";}
    }
  
std::cout << '\n';

 complex del = m1.div(m2);
  std::cout << "Деление :\n";
  for(int i = 0; i < 2; ++i){
      if(i==0){std::cout << del.get(i) << "*";}
	if(i==1){std::cout <<"(cos("<< del.get(i) << ")+i*sin("<< del.get(i) << "))";}
    }
  
std::cout << '\n';
std::cout << "Сравнение комплексных чисел по длине вектора и углу:\n";
int k=0;
int l=0;
for(int i = 0; i < 2; ++i){
    if (m1.get(i)==m2.get(i) && i==0){k=1;} else {k=0;}
     if (m1.get(i)==m2.get(i) && i==1){l=1;} else {l=0;}
}
  

if(k==1){std::cout << "Длины равны\n";} else {std::cout << "Длины не равны\n";}
if(l==1){std::cout << "Углы равны\n";} else {std::cout << "Углы не равны\n";}
	
complex res3(0,0);
complex res4(0,0);
res3.set(m1.get(0),(-1)*m1.get(1));
res4.set(m2.get(0),(-1)*m2.get(1));
std::cout << '\n';
std::cout << "sopr_m1:\n";
  for(int i = 0; i < 2; ++i){
      std::cout << res3.get(i) <<' ';
    }
std::cout << '\n';
std::cout << "sopr_m2:\n";
  for(int i = 0; i < 2; ++i){
      std::cout << res4.get(i) <<' ';
    }
std::cout << '\n';
}
