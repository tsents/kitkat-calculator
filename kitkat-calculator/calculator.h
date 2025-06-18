#pragma once

class Calculator {

public:
    enum error_code {
        DIV_BY_ZERO_ERROR,
        UNKOWN_OPERATION_ERROR
    };
    static double calculate(double num1, char operation, double num2);
    static double add(double num1, double num2);
    static double subtract(double num1, double num2);
    static double multiply(double num1, double num2);
    static double divide(double num1, double num2);
};
