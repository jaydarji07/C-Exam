#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    double getReal() const { return real; }
    double getImag() const { return imag; }

    Complex operator-(const Complex& other) {
        double r = real - other.real;
        double i = imag - other.imag;
        return Complex(r, i);
    }

    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "j";
        else cout << " - " << -imag << "j";
        cout << endl;
    }
};


int main() {
    Complex c1(4, 7); 
    Complex c2(2, 3); 

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    Complex result = c1 - c2;

    cout << "Result of subtraction: ";
    result.display();

    return 0;
}
