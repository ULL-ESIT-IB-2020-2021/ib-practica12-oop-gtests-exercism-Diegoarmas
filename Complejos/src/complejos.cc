#include <iostream> 
#include "complejos.h"

complex::complex(double real, double imag){
parte_real = real;
parte_imag = imag;
}

void complex::suma(double real, double imag, double real1, double imag1){
  parte_real = real + real1;
  parte_imag = imag + imag1;
  std::cout << parte_real << parte_imag;
}

void complex::resta(double real, double imag, double real1, double imag1){
  parte_real = real - real1;
  parte_imag = imag - imag1;
  std::cout << parte_real << parte_imag;
}

void complex::print(){  
std::cout << parte_real << parte_imag;
}