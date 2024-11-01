#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <Windows.h>
#include <regex>
#include <vector>
#include <cmath>
#include <fstream> 
#include <map>
using namespace std;

class Settings {
private:
	static map<string, string> settingsMap; 

public:
	static void Add(const string& key, const string& value) {
		settingsMap[key] = value; 
	}


	static string Get(const string& key) {
		if (settingsMap.find(key) != settingsMap.end()) {
			return settingsMap[key]; 
		}
		else {
			return "Ключ не найден"; 
		}
	}


	static void Print() {
		if (settingsMap.empty()) {
			cout << "Настройки не заданы." << endl;
			return;
		}
		cout << "Настройки:" << endl;
		for (const auto& pair : settingsMap) {
			cout << pair.first << ": " << pair.second << endl; 
		}
	}
};



void printVector(const vector<float>& vec) {
	for (const float& element : vec) {
		cout << element << " ";
	}
	cout << endl; 
}

map<string, string> Settings::settingsMap;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// Часть 1
	/*
	string userString;
	cout << "Введите вашу строку " << endl;
	getline(cin, userString);
	cout << userString << endl;

	if (userString.length() > 4) {
		string sub = userString.substr(1, 3);
		cout << "Подстрока с 2 до 4 символа " << sub << endl;
	}
	else {
		cout << "Строка слишком короткая" << endl;
	}

	size_t index = userString.find('a');

	if (index != string::npos) {
		cout << "Индекс первой 'a' : " << index << endl;
	}
	else {
		cout << "Буква 'a' не найдена";
	}*/


	// Часть 2

	/*string name;
	cout << "Введите ваше имя: ";
	getline(cin, name);

	regex name_regex("^[A-ZА-Я][a-zA-Zа-яёЁА-Я]{1,31}$");
	if (!regex_match(name, name_regex)) {
		cout << "Ошибка: имя должно быть от 2 до 32 символов, начинаться с заглавной буквы и содержать только буквы." << endl;
		return 1;
	}

	string text = "Пример текста: ivanfedorov@mail.com, basYa@bk.ru и hispasd@gmail.com"; 

	regex email_regex("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");
	vector<string> emails;
	sregex_iterator it(text.begin(), text.end(), email_regex);
	sregex_iterator end;

	while (it != end) {
		emails.push_back(it->str());
		++it;
	}

	cout << "Найденные e-mail адреса:" << endl;
	for (const auto& email : emails) {
		cout << email << endl;
	}

	return 0;*/
	 

	// Часть 3


	//int radius;
	//cout << "Введите радиус окружности: " << endl;
	//cin >> radius;

	//double S = 2 * M_PI * radius;

	//cout << "Длина: " << round(S * 1000) / 1000 << endl;



	//string input;
	//ofstream outFile("output.txt", ios::app);  // открыл файл

	//if (!outFile) {
	//	cerr << "Ошибка открытия файола" << endl;
	//	return 1;
	//}

	//while (true) {
	//	cout << "Введите строку (или 'read' для чтения, 'erase' для очистки, 'exit' для выхода): ";
	//	getline(cin, input);

	//	if (input == "read") {
	//		ifstream inFile("output.txt");// читаем файл
	//		if (inFile) {
	//			string line;
	//			cout << "Содержимое файла:" << endl;
	//			while (getline(inFile, line)) {
	//				cout << line << endl;
	//			}
	//			inFile.close();
	//		}
	//		else {
	//			cerr << "Ошибка открытия и чтения!" << endl;
	//		}
	//	}
	//	else if (input == "erase") {
	//		outFile.close();  
	//		ofstream clearFile("output.txt", ios::trunc);  // режим очистки
	//		clearFile.close(); 
	//		cout << "Файл очищен" << endl;
	//		outFile.open("output.txt", ios::app); 
	//	}
	//	else if (input == "exit") {
	//		break;
	//	}
	//	else {
	//		outFile << input << endl;
	//	}
	//}

	//outFile.close();  
	//return 0;

	// 4 часть 
	

	
	
    vector<float> myVector;

    
    myVector.push_back(1.1f);
    myVector.push_back(2.2f);
    myVector.push_back(3.3f);
    myVector.push_back(4.4f);
    myVector.push_back(5.5f);

   
    printVector(myVector);

	myVector.insert(myVector.begin() + 3, 3.9f); 

	
	cout << "Вектор после вставки: ";
	printVector(myVector);

	
	myVector.pop_back(); 

	
	cout << "Вектор после удаления: ";
	printVector(myVector);

	/*Settings appSettings;

	appSettings.Add("language", "English");
	appSettings.Add("resolution", "1920x1080");
	appSettings.Add("volume", "75");

	cout << "Язык: " << appSettings.Get("language") << endl;        
	cout << "Разрешение: " << appSettings.Get("resolution") << endl; 
	cout << "Громкость: " << appSettings.Get("volume") << endl;      

	
	cout << appSettings.Get("unknown") << endl; */

	Settings::Add("language", "English");
	Settings::Add("resolution", "1920x1080");
	Settings::Add("volume", "75");


	Settings::Print();
	cout << "Язык: " << Settings::Get("language") << endl;   
	cout << "Разрешение: " << Settings::Get("resolution") << endl; 
	cout << "Громкость: " << Settings::Get("volume") << endl; 

	
	cout << "Скорость: " << Settings::Get("speed") << endl; 

	return 0;
	


}

