#include <iostream>
#include <clocale>  // Добавляем заголовочный файл для setlocale
#include "calculator.h"

int main() {
    // Устанавливаем локаль для поддержки русского языка
    setlocale(LC_ALL, "Russian");

    // Для Windows: устанавливаем кодовую страницу консоли (если есть проблемы с кодировкой)
    system("chcp 1251 > nul");

    Calculator calc;
    double num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    try {
        switch (operation) {
        case '+':
            std::cout << "Результат: " << calc.add(num1, num2);
            break;
        case '-':
            std::cout << "Результат: " << calc.subtract(num1, num2);
            break;
        case '*':
            std::cout << "Результат: " << calc.multiply(num1, num2);
            break;
        case '/':
            std::cout << "Результат: " << calc.divide(num1, num2);
            break;
        default:
            std::cout << "Ошибка: неверная операция!";
        }
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what();
    }

    return 0;
}