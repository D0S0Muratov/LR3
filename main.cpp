#include <iostream>
#include <cmath>

using namespace std;

// Завдання 1: Сума двох найбільших чисел
void task1() {
    int num1, num2, num3;

    cout << "Введіть три числа: ";
    cin >> num1 >> num2 >> num3;

    int max1, max2;

    // Знаходимо два найбільших числа
    if (num1 >= num2 && num1 >= num3) {
        max1 = num1;
        if (num2 >= num3) {
            max2 = num2;
        } else {
            max2 = num3;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        max1 = num2;
        if (num1 >= num3) {
            max2 = num1;
        } else {
            max2 = num3;
        }
    } else {
        max1 = num3;
        if (num1 >= num2) {
            max2 = num1;
        } else {
            max2 = num2;
        }
    }

    // Обчислюємо суму
    int sum = max1 + max2;

    cout << "Сума двох найбільших чисел: " << sum << endl;
}

// Завдання 2: Перевірка точки на площині (прикладом є коло)
void task2() {
    double x, y, centerX, centerY, radius;

    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    cout << "Введіть координати центру кола (centerX, centerY): ";
    cin >> centerX >> centerY;

    cout << "Введіть радіус кола: ";
    cin >> radius;

    // Перевірка, чи точка знаходиться в колі
    double distance = sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));
    if (distance <= radius) {
        cout << "Точка знаходиться в колі." << endl;
    } else {
        cout << "Точка не знаходиться в колі." << endl;
    }
}

// Завдання 3: Площа і периметр плоскої фігури (прикладом є прямокутник)
void task3() {
    double length, width;

    cout << "Введіть довжину прямокутника: ";
    cin >> length;

    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    // Обчислюємо площу і периметр
    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Площа прямокутника: " << area << endl;
    cout << "Периметр прямокутника: " << perimeter << endl;
}

int main() {
    int choice;

    cout << "Меню:" << endl;
    cout << "1. Сума двох найбільших чисел" << endl;
    cout << "2. Перевірка точки на площині" << endl;
    cout << "3. Площа і периметр плоскої фігури" << endl;
    cout << "Введіть номер завдання: ";
    cin >> choice;

    // Перевірка коректності введеного номера
    if (choice < 1 || choice > 3) {
        cout << "Неправильний номер завдання!" << endl;
        return 1;
    }

    // Виклик відповідної функції
    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
    }

    return 0;
}
