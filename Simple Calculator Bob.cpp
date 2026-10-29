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

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        return 0.0;
    } 
    else if (b != 0) {
        return a/b;
    } 
}

double mean(double a, double b) {
     return (a + b)/2;
}



int main() {
    double a = 6;
    double b = 2;

    std::cout << "Sum: " << sum(a, b) << std::endl;
    std::cout << "Subtract: " << subtract(a, b) << std::endl;
    std::count << "Multiply: " << multiply(a, b) << std::endl;
    std::count << "Divide: " << divide(a, b) << std::endl;
    std::cout << "Mean: " << mean(a, b) << std::endl;
}