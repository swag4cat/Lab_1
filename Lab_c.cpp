#include <iostream>
#include <cmath> // для использования sqrt()

// Функция для вычисления периметра трапеции
double calculatePerimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Функция для вычисления площади трапеции
double calculateArea(double a, double b, double h) {
    return ((a + b) / 2) * h;
}

// Функция для вычисления длины средней линии трапеции
double calculateMedian(double a, double b) {
    return (a + b) / 2;
}

// Функция проверки существования трапеции
bool isValidTrapezoid(double a, double b, double c, double d, double h) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        return false; // Все стороны и высота должны быть положительными
    }
    if (fabs(a - b) >= c + d) {
        return false; // Невозможная геометрическая конфигурация
    }
    return true;
}

int main() {
    double a, b, c, d, h;
    int choice;
    setlocale(LC_ALL, "rus");

    // Ввод сторон и высоты трапеции
    std::cout << "Введите основания a и b трапеции: ";
    std::cin >> a >> b;
    std::cout << "Введите боковые стороны c и d трапеции: ";
    std::cin >> c >> d;
    std::cout << "Введите высоту h трапеции: ";
    std::cin >> h;

    // Проверка на валидность трапеции
    if (!isValidTrapezoid(a, b, c, d, h)) {
        std::cout << "Ошибка: из введенных данных невозможно построить трапецию." << std::endl;
        return 1;
    }

    // Основной цикл программы
    while (true) {
        // Меню выбора
        std::cout << "\nВыберите функцию для вычисления:\n";
        std::cout << "1. Периметр трапеции\n";
        std::cout << "2. Площадь трапеции\n";
        std::cout << "3. Длина средней линии трапеции\n";
        std::cout << "4. Выход\n";
        std::cout << "Введите номер выбора: ";
        std::cin >> choice;

        // Обработка выбора пользователя
        switch (choice) {
        case 1:
            std::cout << "Периметр трапеции: " << calculatePerimeter(a, b, c, d) << std::endl;
            break;
        case 2:
            std::cout << "Площадь трапеции: " << calculateArea(a, b, h) << std::endl;
            break;
        case 3:
            std::cout << "Длина средней линии трапеции: " << calculateMedian(a, b) << std::endl;
            break;
        case 4:
            std::cout << "Выход из программы." << std::endl;
            return 0; // Завершение программы
        default:
            std::cout << "Неверный выбор. Пожалуйста, выберите число от 1 до 4." << std::endl;
            break;
        }
    }

    return 0;
}
