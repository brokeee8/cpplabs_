// Лабораторная #3 часть 1
//1.Создайте переменную со значением на Ваше усмотрение.
//2.Объявите указатель на созданную переменную.
//3.Выведите в консоль адрес указателя и значение, которое хранится по этому адресу.
//4.Измените значение, которое хранится по адресу указателя.
//5.Убедитесь, что переменная из 1 - го пункта так же изменила своё значение.
//6.Создайте массив из нескольких элементов(тип и значение на Ваше усмотрение).
//7.Выведите все элементы массива в консоль, используя указатель.
//8.Объявите целую переменную со значением 5.
//9.Создайте такой указатель на эту переменную, чтобы нельзя было менять адрес, на который он ссылается, но при этом, чтобы через него можно было менять значение.
//10.Убедитесь, что Вы всё сделали правильно, попытавшись поменять адрес на другой и получив ошибку компилятора, а также поменяв значение через указатель и выведя переменную в консоль, у которой должно быть уже новое значение.

// Лабораторная #3 часть 2 
//1.Создайте функцию, которая принимает 2 указателя(на начало и конец массива) и которая возвращает сумму всех элементов массива.
//2.Проверьте правильность работы функции, вызвав её и передав массив из нескольких чисел.
//3.Создайте 2 функции, принимающих 2 параметра и возвращающих их сумму и их разность соответственно.
//4.Создайте функцию, принимающую 1 параметр типа char.
//5.Созданная функция должна возвращать указатель на одну из двух функций(суммы или разности) в зависимости от значения переданного char.Если он равен '+', то возвращается указатель на функцию суммы, а если он равен '-', то возвращается указатель на функцию разности.
//6.Проверьте работу созданных функций, вызвав сначала ту, что возвращает указатель, а потом вызвав и эту функцию по указателю, получив правильное значение, которое затем выведите в консоль.
//7.Создайте динамический указатель типа float.
//8.Выведите его в консоль, а после удалите его из памяти с помощью delete.

#include <iostream>
#include <iterator>
using namespace std;

int arraySum(int* start, int* end) {

	int sum = 0;

	for (int* ptr = start; ptr != end; ++ptr) {
	
		sum += *ptr;
	}
	return sum;
}

int sum(int a, int b) {
	int sum = a + b;
	return sum;
}

int difference(int a, int b) {
	int dif = a - b;
	return dif;
}


int (*choice(char symbol))(int, int) {
	if (symbol == '+') {
		return sum;
	}
	else if (symbol == '-') {
		return difference;
	}
	else {
		return nullptr;
	}
}



int main()
{
	// часть 1
	int var = 24;
	int* pointer;
	pointer = &var;
	
	cout << "Adress: " << pointer << endl;
	cout << "Value before change: " << var << endl;

	*pointer = 15;
	cout << "after change: " << var << endl;


	int arr[5] = { 1,2,4,3,9 };
	for (int* p = arr; p <= &arr[4]; p++) {
		cout << *p << "  ";
	}
	cout << endl;

	int a = 5;
	int* const pntr = &a;

	cout << "Adress before: " << pntr << endl;
	cout << "Value before: " << a << endl;

	*pntr = 12;
	//pntr = nullptr; // если раскомментировать строку, то компилятор выдаст ошибку

	cout << "Adress after: " << pntr << endl;
	cout << "Value after: " << a << endl;


	// часть 2
	cout << endl << "Part 2: " << endl << endl;

	int array[4] = { 1,2,3,4 };
	int* start = array;
	int* ending = end(array);

	int totalSum = arraySum(start, ending);
	cout << totalSum << endl;


	int z = 1;
	int y = 34;
	int resultSum = sum(z, y);
	int resultDif = difference(z, y);
	cout << "Summa: " << resultSum << endl;
	cout << "Dif: " << resultDif << endl;


	char symb;
	cout << "Choose symbol: '+' or '-' " << endl;
	cin >> symb;

	int (*choiceFunc)(int, int) = choice(symb);

	if (choiceFunc != nullptr) {
		int num1 = 15;
		int num2 = 3;
		cout << "Operation: " << symb << endl;
		int result = choiceFunc(num1, num2);
		cout << "Result: " << result << endl;
	}
	else {
		cout << "Wrong operation" << endl;
	}


	float* dynamicFloatPntr = new float;
	*dynamicFloatPntr = 5.75f;

	cout << "Dynamic pointer: " << *dynamicFloatPntr << endl;
	delete dynamicFloatPntr;
	cout << "Dynamic pointer: " << *dynamicFloatPntr << endl;

}

