#include <iostream>
#include <cmath>
using namespace std;

// Вычисление периметра
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Вычисление площади по формуле Герона
double area(double a, double b, double c) {
    double s = (a + b + c) / 2; // полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
// Проверка на равнобедренность
bool equalSide(double a, double b, double c) {
    return (a==b|| a==c|| b==c);
}
int main() {
    double a, b, c;
    int choose;
    cout << "Size side"<<endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    // Проверка существования треугольника
    if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0){
        cout << "Choose what you want to know:"<<endl;
        cout << " 1 - Perimeter"<< endl;
        cout << " 2 - Area with Heron's formula"<< endl;
        cout << " 3 - Equal side"<<endl;
        cout<< " 4 - Exit"<<endl;
        cout<< "You choose - ";
        cin >> choose;
            switch (choose){
                case(1):
                    cout <<"Perimeter of a triangle: "<< perimeter(a,b,c)<<endl;
                    break;
                case (2):
                    cout<< "Area of a triangle: "<< area(a,b,c)<<endl;
                    break;
                case (3):
                    cout<< "Equal side of a triangle: "<<(equalSide(a, b, c) ? "Yes" : "No")<< endl;
                    break;
                case (4):
                    cout<< "Exit"<<endl;
                    return 0;
                default:
                    cout<< "Error"<<endl;
                    cout<< "Change your choice"<<endl;
                    break;
        }
    }
    else
    {
        cout << "Error: doesn't exist "<<endl;
        return 0;
        }
        
}
