//calculator to compare the absolute values of complex numbers

#include <iostream>
#include <complex>
#include <cmath>
#include <iomanip>
int main() {
    double r1, i1, r2, i2;
    std::cout << "Input the first real number: ";
    std::cin >> r1;
    std::cout << "Input the imaginary coordinate: ";
    std::cin >> i1;
    std::cout << "Input the second real number: ";
    std::cin >> r2;
    std::cout << "Input the second imaginary coordinate: ";
    std::cin >> i2;
    std::complex<double> z(r1, i1); //defines complex number as r1 + i1
    std::complex<double> w(r2, i2);
    double magnitude = std::abs(z); //automatically calculates sqrt(a^2 + b^2) aka distance
    double magni2de = std::abs(w);
    return 0;
}