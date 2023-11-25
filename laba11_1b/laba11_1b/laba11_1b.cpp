#include <iostream>
#include <string>

using namespace std;

int main() {
    int tramNumber;

    // Введення номера трамваю
    cout << "Введіть номер трамваю (1-7): ";
    cin >> tramNumber;

    // Задання даних для семи варіантів
    string startStop, endStop;

    if (tramNumber == 1) {
        startStop = "Зупинка А";
        endStop = "Зупинка Б";
    }
    else if (tramNumber == 2) {
        startStop = "Зупинка В";
        endStop = "Зупинка Г";
    }
    else if (tramNumber == 3) {
        startStop = "Зупинка Д";
        endStop = "Зупинка Е";
    }
    else if (tramNumber == 4) {
        startStop = "Зупинка Ж";
        endStop = "Зупинка З";
    }
    else if (tramNumber == 5) {
        startStop = "Зупинка И";
        endStop = "Зупинка Й";
    }
    else if (tramNumber == 6) {
        startStop = "Зупинка К";
        endStop = "Зупинка Л";
    }
    else if (tramNumber == 7) {
        startStop = "Зупинка М";
        endStop = "Зупинка Н";
    }
    else {
        cout << "Некоректний номер трамваю!" << endl;
        return 1;
    }

    // Виведення інформації
    cout << "Початкова зупинка трамваю " << tramNumber << ": " << startStop << endl;
    cout << "Кінцева зупинка трамваю " << tramNumber << ": " << endStop << endl;

    return 0;
}
