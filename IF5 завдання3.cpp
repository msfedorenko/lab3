#include <iostream>

using namespace std;

void task_if5() {
    int a, b, c;
    cout << "=== ЗАВДАННЯ 3 (If5) ===" << endl;
    cout << "Введіть три цілих числа через пробіл (наприклад: 5 -2 0): ";
    cin >> a >> b >> c;

    // Перевірка на коректність введених даних (чи є вони цілими числами)
    if (cin.fail()) {
        cerr << "Помилка: Введено некоректні дані (очікувалися цілі числа)!" << endl;
        return;
    }

    int positive_count = 0;
    int negative_count = 0;

    // Аналіз першого числа
    if (a > 0) {
        positive_count++;
    } else if (a < 0) {
        negative_count++;
    }

    // Аналіз другого числа
    if (b > 0) {
        positive_count++;
    } else if (b < 0) {
        negative_count++;
    }

    // Аналіз третього числа
    if (c > 0) {
        positive_count++;
    } else if (c < 0) {
        negative_count++;
    }

    cout << "Кількість додатних чисел: " << positive_count << endl;
    cout << "Кількість від'ємних чисел: " << negative_count << endl;
}

int main() {
    task_if5();
    system("pause");
    return 0;
}