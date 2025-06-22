#include "division_exception.h"

DivisionException::DivisionException(double with) : m_with(with) { 
    std::string withString = std::to_string(m_with);
    m_errorMsg.append(withString);
};

const char* DivisionException::what() {
    return m_errorMsg.c_str();
}