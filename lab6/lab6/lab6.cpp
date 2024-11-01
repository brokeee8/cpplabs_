#include <iostream>
#include <Windows.h>
using namespace std;

enum ErrorCode {
    NegativeYear,
    FutureYear,
    YearTooOld
};

class birthException : public runtime_error {
public:
    ErrorCode code;

    birthException(const string& message, ErrorCode errCode)
        : runtime_error(message), code(errCode) {}
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*cout << "Введите число 1, 2 или 3: " << endl;
    int num;
    cin >> num;
    try {
        switch (num) {
        case 1:
            cout << "Один" << endl;
            break;
        case 2:
            cout << "Два" << endl;
            break;
        case 3:
            cout << "Три" << endl;
            break;
        default:
            throw runtime_error("Некорректное значение");
        }
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
        return 1;
    }

    int birth;
    cout << "Введите ваш год рождения: " << endl;
    cin >> birth;

    try {
        
        if (birth < 0) {
            throw runtime_error("Вы ввели отрицательное число");
        }
        else if (birth < 1850) {
            throw runtime_error("Что то не верится");
        }
        else if (birth > 2024) {
            throw runtime_error("Вы еще не родились");
        }
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
        return 1;
    }

    cout << "Спасибо" << endl;*/

    // Эти же задания, но переделанные по п.8

    int birth;
    cout << "Введите ваш год рождения: " << endl;
    cin >> birth;

    try {
        if (birth < 0) {
            throw birthException("Отрицательный год" , ErrorCode::NegativeYear);
        }
        else if (birth > 2024) {
            throw birthException("Вы ещё не родились", ErrorCode::FutureYear);
        }
        else if (birth < 1850) {
            throw birthException("Что то не верится", ErrorCode::YearTooOld);
        }
    }
    catch (const birthException& e) {
        cout << e.what() << endl;
        return 1;
    }
    cout << "Спасибо" << endl;
}

