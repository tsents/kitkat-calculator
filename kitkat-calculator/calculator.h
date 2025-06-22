#pragma once
#include "calculator_exceptions.h"

/*
 * A static class that implements the basic mathmatical operations.
 * Besides the operation, can throw in case of uknown and illegal operations.
 * for information about the exceptions check calculator_exceptions.
 */
class Calculator {

public:
    /*
     * Wraps the basic mathmatical operations, where num1 is the lhs and num2 is the rhs
     */
    static double add(double num1, double num2);
    static double subtract(double num1, double num2);
    static double multiply(double num1, double num2);
    static double divide(double num1, double num2);

    /*
     * Calls the basic mathmatical operations based on the required operation symbol.
     * supports add(+) sub(-) mul(*) and div(/).
     * In addition, throws an exception if operation is not found.
     */
    static double calculate(double num1, char operation, double num2);
};
