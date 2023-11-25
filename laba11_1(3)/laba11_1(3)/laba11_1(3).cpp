#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;

    cout << "Виберіть номер задачі (1-3): ";
    cin >> choice;

    switch (choice) {
    case 1: {
        // Задача 1: Знайти суму цілих додатних чисел із відрізка від a до b, кратних чотирьом.
        int a, b;
        cout << "Введіть a та b: ";
        cin >> a >> b;

        int sum = 0;
        for (int i = a; i <= b; i++) {
            if (i % 4 == 0) {
                sum += i;
            }
        }

        cout << "Сума цілих додатних чисел, кратних чотирьом, у відрізку від " << a << " до " << b << ": " << sum << endl;
        break;
    }

    case 2: {
        // Задача 2: Визначити, чи стане число паліндромом, якщо до нього вкінець дописати одну з цифр від 1 до 9.
        int number;
        cout << "Введіть число: ";
        cin >> number;

        bool isPalindrome = false;

        for (int i = 1; i <= 9; i++) {
            int modifiedNumber = number * 10 + i;
            int reversedNumber = 0, temp = modifiedNumber;

            while (temp > 0) {
                reversedNumber = reversedNumber * 10 + temp % 10;
                temp /= 10;
            }

            if (modifiedNumber == reversedNumber) {
                isPalindrome = true;
                break;
            }
        }

        cout << (isPalindrome ? "Так" : "Ні") << ", число стане паліндромом після додавання однієї з цифр від 1 до 9." << endl;
        break;
    }

    case 3: {
        // Задача 3: Кількість бактерій через n хвилин.
        int n;
        cout << "Введіть кількість хвилин (n): ";
        cin >> n;

        // Кількість бактерій подвоюється кожну хвилину
        int bacteriaCount = pow(2, n);

        cout << "Через " << n << " хвилин(и) буде " << bacteriaCount << " бактерій." << endl;
        break;
    }

    default:
        cout << "Некоректний вибір задачі!" << endl;
    }

    return 0;
}
