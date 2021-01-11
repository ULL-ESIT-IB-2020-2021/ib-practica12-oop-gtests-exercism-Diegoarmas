#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Introduzca la parte real e imaginaria: ";
        cin >> real;
        cin >> imag;
    }

    
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << " " << real << imag << "i";
        else
            cout << " " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complejo1, complejo2, resultado;

    cout << "Introduzca el primer numero complejo:\n";
    complejo1.input();

    cout << "Introduzca el segundo numero complejo:\n";
    complejo2.input();

    resultado = complejo1 + complejo2;
    resultado.output();

    return 0;
}