#include <iostream>
#include <cmath> // для использования функции sqrt()

// Функция для вычисления периметра прямоугольника
double calculateP(double width, double height) {
    return 2 * (width + height);
}

// Функция для вычисления площади прямоугольника
double calculateS(double width, double height) {
    return width * height;
}

// Функция для вычисления длины диагонали прямоугольника
double calculateDiagonal(double width, double height) {
    return sqrt(width * width + height * height);
}

int main() {
    double width, height;
    int choice;

    // Ввод ширины и высоты прямоугольника
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;
    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> height;

    // Основной цикл программы
    while (true) {
        // Меню выбора
        std::cout << "\nВыберите функцию для вычисления:\n";
        std::cout << "1. Периметр прямоугольника\n";
        std::cout << "2. Площадь прямоугольника\n";
        std::cout << "3. Длина диагонали прямоугольника\n";
        std::cout << "4. Выход\n";
        std::cout << "Введите номер выбора: ";
        std::cin >> choice;

        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                std::cout << "Периметр прямоугольника: " << calculateP(width, height) << std::endl;
                break;
            case 2:
                std::cout << "Площадь прямоугольника: " << calculateS(width, height) << std::endl;
                break;
            case 3:
                std::cout << "Длина диагонали прямоугольника: " << calculateDiagonal(width, height) << std::endl;
                break;
            case 4:
                std::cout << "Выход из программы. До свидания!" << std::endl;
                return 0; // Завершение программы
            default:
                std::cout << "Неверный выбор. Пожалуйста, выберите число от 1 до 4." << std::endl;
                break;
        }
    }

    return 0;
}
