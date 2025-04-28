#include <iostream>
#include <clocale>  // ��������� ������������ ���� ��� setlocale
#include "calculator.h"

int main() {
    // ������������� ������ ��� ��������� �������� �����
    setlocale(LC_ALL, "Russian");

    // ��� Windows: ������������� ������� �������� ������� (���� ���� �������� � ����������)
    system("chcp 1251 > nul");

    Calculator calc;
    double num1, num2;
    char operation;

    std::cout << "������� ������ �����: ";
    std::cin >> num1;

    std::cout << "������� �������� (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    try {
        switch (operation) {
        case '+':
            std::cout << "���������: " << calc.add(num1, num2);
            break;
        case '-':
            std::cout << "���������: " << calc.subtract(num1, num2);
            break;
        case '*':
            std::cout << "���������: " << calc.multiply(num1, num2);
            break;
        case '/':
            std::cout << "���������: " << calc.divide(num1, num2);
            break;
        default:
            std::cout << "������: �������� ��������!";
        }
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "������: " << e.what();
    }

    return 0;
}