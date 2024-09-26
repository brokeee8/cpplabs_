//1.    Получите от пользователя 2 числа.
//2.    Выведите среднее арифметическое двух введённых чисел в консоль.
//3.    Попросите пользователя ввести знак операции : +, -, * или / .
//4.    Сохраните эту команду в переменную.
//5.    Используя условный оператор, выполните соответствующую операцию с двумя ранее введёнными числами.То есть, если, например, пользователь ввёл*, то надо вывести результат перемножения этих чисел.
//6.    Закомментируйте код из предыдущего пункта и реализуйте его с использованием оператора switch - case.

#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;
    cout << "Введите число а: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    float avg = (a + b) / 2;
    cout << "Среднее арифметическое: " << avg;
    cout << "Выберите операцию(+, -, * или /): ";
    char operation;
    cin >> operation;

    string command = "";
    command += operation;

    /*if (operation == "+") {
        cout << (a + b) << endl;
    }
    if (operation == "-") {
        cout << (a - b) << endl;
    }
    if (operation == "*") {
        cout << (a * b) << endl;
    }
    if (operation == "/") {
        cout << (a / b) << endl;
    }*/

    switch (operation) {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':
        cout << (a / b);
        break;
    default:
        cout << "Некорректный ввод, введите +, -, * или /";
    }


}