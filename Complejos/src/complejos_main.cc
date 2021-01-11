#include <iostream>
#include "complejos.h"

int main() {
double real1;
double real2;
double imag1;
double imag2;
double opcion;
std::cout << "introduca 1 si quieres sumar, 2 si quieres restar: "; std::cin >> opcion;

if(opcion == 1){
  std::cout << "Introduce la parte real del primer número complejo: " ; std::cin >> real1;
  std::cout << "Introduce la parte imaginaria del primer número complejo: " ; std::cin >> imag1;
  std::cout << "Introduce la parte real del segundo número complejo: " ; std::cin >> real2;
  std::cout << "Introduce la parte imaginaria del segundo número complejo: " ; std::cin >> imag2;
  
  complex complejo1(real1, imag1);
  complex complejo2(real2, imag2);
  complex resultado(0,0);
  resultado.suma(real1, imag1, real2, imag2);
  resultado.print();

  
  
}
if(opcion == 2){
  std::cout << "Introduce la parte real del primer número complejo: " ; std::cin >> real1;
  std::cout << "Introduce la parte imaginaria del primer número complejo: " ; std::cin >> imag1;
  std::cout << "Introduce la parte real del segundo número complejo: " ; std::cin >> real2;
  std::cout << "Introduce la parte imaginaria del segundo número complejo: " ; std::cin >> imag2;
  
  complex complejo1(real1,imag1);
  complex complejo2(real2, imag2);
  complex resultado(0, 0);
  resultado.resta(real1, imag1, real2, imag2);
  resultado.print();

}


}