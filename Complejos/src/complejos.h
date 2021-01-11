#pragma once


class complex{
private:
  double parte_real;
  double parte_imag;
  

public:

complex(double real, double imag); 
void print();
void suma(double real, double imag, double real1, double imag1);
void resta(double real, double imag, double real1, double imag1);
};