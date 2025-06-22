#include "calculator_exceptions.h"

DivisionException::DivisionException(double with) : m_with(with) {
    std::string withString = std::to_string(m_with);
    m_errorMsg.append(withString);
};

const char* DivisionException::what() const noexcept {
    return m_errorMsg.c_str();
}

OperationException::OperationException(char operation) : m_operation(operation) {
    m_errorMsg += operation;
}
const char* OperationException::what() const noexcept {
    return m_errorMsg.c_str();
}
