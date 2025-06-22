#pragma once
#include "division_exception.h"

class Calculator {

public:
    static double add(double num1, double num2);
    static double subtract(double num1, double num2);
    static double multiply(double num1, double num2);
    static double divide(double num1, double num2);
    static double calculate(double num1, char operation, double num2);
};
