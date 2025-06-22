#pragma once
#include <stdexcept>
#include <string>

class DivisionException : std::exception {
public:
    DivisionException(double);
    const char* what();
private:
    std::string m_errorMsg = "Error encountered in division by 0 of ";
    double m_with; //Divided by zero with (m_with).
};