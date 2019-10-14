#include <iostream>
#include <cmath>
#include "complex.h"

int main(){
	complex m1;
	complex m2;
printf("Введите первое комплексное число\n");
    m1.read(std::cin);
printf("Введите второе комплексное число\n");
    m2.read(std::cin);
printf("Первое комплексное число, модуль длины (r)  угол (u)\n");
  m1.write(std::cout);
std::cout << '\n';
printf("Второе комплексное число, модуль длины (r)  угол (u)\n");
  m2.write(std::cout);
std::cout << '\n';

std::cout << "Длина и угол(в радианах) вектора суммы:\n";
complex sum = m1.add(m2);
for(int i = 0; i < 2; ++i){
 std::cout<<sum.get(i) << ' ';
  }	    
std::cout <<'\n';
std::cout << "Длина и угол(в радианах) вектора разности:\n";
complex sub = m1.sub(m2);
for(int i = 0; i < 2; ++i){

  std::cout <<sub.get(i) << ' ';
  		 }	    
std::cout <<'\n';

  std::cout << "Произведение: \n";
   m1.multiply(m2);
  
std::cout << '\n';

std::cout << "Деление :\n";
	m1.div(m2);
  
std::cout << '\n';
std::cout << "Сравнение комплексных чисел по длине вектора и углу:\n";
	m1.equ(m2);
	
std::cout << '\n';
std::cout << "sopr_m1:\n";
complex sm1=m1.sopr();
  for(int i = 0; i < 2; ++i){
 std::cout<<sm1.get(i)<<' ';
    }

std::cout << '\n';
std::cout << "sopr_m2:\n";
complex sm2=m2.sopr();
  for(int i = 0; i < 2; ++i){
      std::cout<<sm2.get(i)<<' ';
    }
std::cout << '\n';
}
