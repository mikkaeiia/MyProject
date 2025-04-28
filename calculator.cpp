#include "calculator.h"
#include <stdexcept> // Для обработки исключений

// Реализация метода сложения
double Calculator::add(double a, double b) {
    return a + b;
}

// Реализация метода вычитания
double Calculator::subtract(double a, double b) {
    return a - b;
}

// Реализация метода умножения
double Calculator::multiply(double a, double b) {
    return a * b;
}

// Реализация метода деления с проверкой на ноль
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Деление на ноль невозможно!");
    }
    return a / b;
}