#pragma once
#include <stdexcept>
#include <string>

/*
 * This Exception is thrown in calculator when deviding by zero.
 * It holds information on what the attempted operation was,
 * to help debugging.
 */
class DivisionException : std::exception {
public:
    DivisionException(double);
    const char* what() const noexcept override;

private:
    std::string m_errorMsg = "Error encountered in division by 0 of ";
    double m_with; // Divided by zero with (m_with).
};

/*
 * This exception is thrown in calculator when an operation,
 * wanted in the calculate() function, doesnt match any known operations.
 * Prints the unkown operation to help debugging.
 */
class OperationException : std::exception {
public:
    OperationException(char);
    const char* what() const noexcept override;

private:
    std::string m_errorMsg = "Unrecognized operation ";
    double m_operation; // The operation attempted.
};
