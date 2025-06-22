#include "calculator.h"
#include <iostream>

int main() {
    std::cout << "Lets calculate!" << std::endl;
    std::cout << Calculator::add(5, 5) << std::endl;
    std::cout << Calculator::subtract(5, 5) << std::endl;
    std::cout << Calculator::multiply(5, 5) << std::endl;
    std::cout << Calculator::divide(5, 5) << std::endl;

    std::cout << Calculator::calculate(5, '/', 5) << std::endl;
    std::cout << Calculator::calculate(5, '*', 5) << std::endl;
    std::cout << Calculator::calculate(5, '-', 5) << std::endl;

    //try {
    //    std::cout << Calculator::calculate(5, '&', 5) << std::endl;
    //} catch () {
    //    if (error == Calculator::UNKOWN_OPERATION_ERROR) {
    //        std::cout << "Caught unkown operation error" << std::endl;
    //    }
    //}

    try {
        std::cout << Calculator::calculate(5, '/', 0) << std::endl;
    } catch (DivisionException error) {
        std::cerr << error.what() << std::endl;
    }
}