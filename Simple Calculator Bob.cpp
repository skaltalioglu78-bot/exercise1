//
// Created by Thawinee Thongprajiad on 10/29/26.
//
#include <iostream>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double mean(double a, double b) {
     return (a + b)/2;
}



int main() {
    double a = 6;
    double b = 2;

    std::cout << "Sum: " << sum(a, b) << std::endl;
    std::cout << "Subtract: " << subtract(a, b) << std::endl;
    std::cout << "Mean: " << mean(a, b) << std::endl;
}