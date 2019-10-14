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

printf("Длина и угол(в радианах) вектора суммы:\n");
complex sum = m1.add(m2);
sum.write(std::cout);	    
std::cout <<'\n';

printf("Длина и угол(в радианах) вектора разности:\n");
complex sub = m1.sub(m2);
sub.write(std::cout);
  		 	    
std::cout <<'\n';

printf("Произведение: \n");
   m1.multiply(m2).write(std::cout); 
std::cout << '\n';

printf("Деление :\n");
	m1.div(m2).write(std::cout);
  
std::cout << '\n';
printf("Сравнение комплексных чисел по длине вектора и углу:\n");
	m1.equ(m2);
	
std::cout << '\n';
printf("sopr_m1:\n");
complex sm1=m1.sopr();
  sm1.write(std::cout);

std::cout << '\n';
printf("sopr_m2:\n");
complex sm2=m2.sopr();
	sm2.write(std::cout);
std::cout << '\n';

}
