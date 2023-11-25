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

    switch (tramNumber) {
    case 1:
        startStop = "Зупинка А";
        endStop = "Зупинка Б";
        break;
    case 2:
        startStop = "Зупинка В";
        endStop = "Зупинка Г";
        break;
    case 3:
        startStop = "Зупинка Д";
        endStop = "Зупинка Е";
        break;
    case 4:
        startStop = "Зупинка Ж";
        endStop = "Зупинка З";
        break;
    case 5:
        startStop = "Зупинка И";
        endStop = "Зупинка Й";
        break;
    case 6:
        startStop = "Зупинка К";
        endStop = "Зупинка Л";
        break;
    case 7:
        startStop = "Зупинка М";
        endStop = "Зупинка Н";
        break;
    default:
        cout << "Некоректний номер трамваю!" << endl;
        return 1;
    }

    // Виведення інформації
    cout << "Початкова зупинка трамваю " << tramNumber << ": " << startStop << endl;
    cout << "Кінцева зупинка трамваю " << tramNumber << ": " << endStop << endl;

    return 0;
}
