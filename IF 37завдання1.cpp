#include <iostream>
#include <cmath>

using namespace std;

// Окрема процедура для Завдання 1 (Варіант If37)
void task_if37() {
    double x;
    cout << "=== ЗАВДАННЯ 1 (If37) ===" << endl;
    cout << "Введіть дійсне число x: ";
    cin >> x;

    // Перевірка на коректність введення даних (не числа)
    if (cin.fail()) {
        cerr << "Помилка: Введено не числові дані!" << endl;
        return;
    }

    int q; // Результат цілого типу за умовою[cite: 5, 11]

    // Розгалуження на основі інтервалів x[cite: 5, 11]
    if (x < 0.0) {
        q = static_cast<int>(-2 * x);
    } else if (x <= 2.0) {
        q = static_cast<int>(x * x + 1);
    } else {
        q = 5;
    }

    cout << "Результат обчислення q(" << x << ") = " << q << endl;
}

int main() {
    task_if37();
    return 0;
}