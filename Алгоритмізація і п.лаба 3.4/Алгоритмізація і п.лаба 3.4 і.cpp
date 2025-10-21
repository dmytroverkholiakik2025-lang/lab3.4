// Lab 3.4
// < Верхоляк Дмитро Юрійович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою (Варіант 2).

#include <iostream>
#include <cmath>

int main() {
    double x, y, R;

    // Введення даних
    std::cout << "Enter R: ";
    std::cin >> R;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;

    // Перевірка умови для фігури
    if (((x * x + y * y <= R * R) && (x <= 0 && y >= 0)) ||
        ((y <= 0) && (y >= -2 * x) && (y >= 2 * x - 2 * R)))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}