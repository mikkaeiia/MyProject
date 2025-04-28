#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // Сложение
    double add(double a, double b);

    // Вычитание
    double subtract(double a, double b);

    // Умножение
    double multiply(double a, double b);

    // Деление (с проверкой на ноль)
    double divide(double a, double b);
};

#endif