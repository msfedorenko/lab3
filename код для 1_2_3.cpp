#include <iostream>
#include <cmath>

using namespace std;

// Декларації процедур
void task_if37();   // Завдання 1
void task_geom34(); // Завдання 2
void task_if5();    // Завдання 3

int main() {
    int menu;
    cout << "=======================================" << endl;
    cout << "  ЛАБОРАТОРНА РОБОТА №3 (Варіант 12)   " << endl;
    cout << "=======================================" << endl;
    cout << "Оберіть завдання для виконання:" << endl;
    cout << "1 - Завдання 1 (If37)" << endl;
    cout << "2 - Завдання 2 (Geom 34)" << endl;
    cout << "3 - Завдання 3 (If5)" << endl;
    cout << "0 - Вихід" << endl;
    cout << "Ваш вибір: ";
    
    cin >> menu;

    if (cin.fail()) {
        cerr << "Помилка: Введено не числове значення!" << endl;
        return 1;
    }

    switch (menu) {
        case 1:
            task_if37();
            break;
        case 2:
            task_geom34();
            break;
        case 3:
            task_if5();
            break;
        case 0:
            cout << "Завершення роботи." << endl;
            break;
        default:
            cout << "Невірний пункт меню! Введіть від 0 до 3." << endl;
            break;
    }

    return 0;
}

// Завдання 1 (If37)
void task_if37() {
    double x;
    cout << "\n=== ЗАВДАННЯ 1 (If37) ===" << endl;
    cout << "Введіть дійсне число x: ";
    cin >> x;

    if (cin.fail()) {
        cerr << "Помилка: Введено не числове значення!" << endl;
        return;
    }

    int q;
    if (x < 0.0) {
        q = static_cast<int>(-2 * x);
    } else if (x <= 2.0) {
        q = static_cast<int>(x * x + 1);
    } else {
        q = 5;
    }

    cout << "Результат q(" << x << ") = " << q << endl;
}

// Завдання 2 (Geom 34)
void task_geom34() {
    double r, x, y;
    cout << "\n=== ЗАВДАННЯ 2 (Geom 34) ===" << endl;
    cout << "Введіть радіус кола r (r > 0): ";
    cin >> r;

    if (cin.fail() || r <= 0) {
        cerr << "Помилка: Некоректне значення радіуса!" << endl;
        return;
    }

    cout << "Введіть координати точки (x y): ";
    cin >> x >> y;

    if (cin.fail()) {
        cerr << "Помилка: Некоректні координати!" << endl;
        return;
    }

    double distSq = x * x + y * y;
    bool inCircle = (distSq <= r * r);
    bool inArea = inCircle && (x >= 0) && (y >= 0) && (y <= x);

    if (inArea) {
        cout << "Точка (" << x << ", " << y << ") ПОТРАПЛЯЄ у фігуру." << endl;
    } else {
        cout << "Точка (" << x << ", " << y << ") НЕ потрапляє у фігуру." << endl;
    }
}

// Завдання 3 (If5)
void task_if5() {
    int a, b, c;
    cout << "\n=== ЗАВДАННЯ 3 (If5) ===" << endl;
    cout << "Введіть три цілих числа (a b c): ";
    cin >> a >> b >> c;

    if (cin.fail()) {
        cerr << "Помилка: Значення мають бути цілими числами!" << endl;
        return;
    }

    int positive_count = 0;
    int negative_count = 0;

    if (a > 0) positive_count++;
    else if (a < 0) negative_count++;

    if (b > 0) positive_count++;
    else if (b < 0) negative_count++;

    if (c > 0) positive_count++;
    else if (c < 0) negative_count++;

    cout << "Кількість додатних чисел: " << positive_count << endl;
    cout << "Кількість від'ємних чисел: " << negative_count << endl;
}