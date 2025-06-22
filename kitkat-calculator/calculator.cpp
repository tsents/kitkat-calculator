#include "calculator.h"

double Calculator::add(double num1, double num2) {
    return num1 + num2;
}

double Calculator::subtract(double num1, double num2) {
    return num1 - num2;
}

double Calculator::multiply(double num1, double num2) {
    return num1 * num2;
}

double Calculator::divide(double num1, double num2) {
    if (num2 == 0) {
        throw DivisionException(num1);
    }
    return num1 / num2;
}

double Calculator::calculate(double num1, char operation, double num2) {
    switch (operation) {
    case '+':
        return Calculator::add(num1, num2);
    case '-':
        return Calculator::subtract(num1, num2);
    case '/':
        return Calculator::divide(num1, num2);
    case '*':
        return Calculator::multiply(num1, num2);
    }
    throw 0; // TODO;
}
