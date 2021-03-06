#include "stdafx.h"
#include "conio.h"
#include "windows.h"
#include "iostream"
#include "string"
using namespace std;

class Монитор {
private:	// внутренние свойства и методы класса 

	string firma;	  // фирма
	string tip;    // тип
	float diagonal; // диагональ

public:		// внешне доступные свойства и методы класса

			// метод установки фирмы
	void set_firma(string new_firma) {
		firma = new_firma;
	}
	// метод установки типа
	void set_tip(string new_tip) {
		tip = new_tip;
	}
	// метод установки диагонали
	void set_diagonal(float new_diagonal) {
		diagonal = new_diagonal;
	}
	// метод для получения фирмы
	string get_firma() {
		return firma;
	}
	// метод для получения типа
	string get_tip() {
		return tip;
	}
	// метод для получения диагонали
	float get_diagonal() {
		return diagonal;
	}
	// метод вывода свойств класса на экран
	void print() {
		cout << "firma: " << firma << " | tip: " << tip << " | diagonal: " << diagonal << endl;
	}
};


int main()
{
	SetConsoleOutputCP(1251);	// для корректного отображения русской кодировки 
	SetConsoleCP(1251);			// для корректного ввода русской кодировки

	Монитор mass[5];	// массив классов

					// переменные для ввода информации
	string firma;	  // фирма
	string tip;    // типа
	float diagonal; // диагональ

			   // цикл ввода информации
	for (int i = 0; i < 5; i++) {
		cout << "firma: ";
		cin >> firma;

		cout << "tip: ";
		cin >> tip;

		cout << "diagonal: ";
		cin >> diagonal;

		// устанавливаем свойства класса в массиве
		mass[i].set_firma(firma);
		mass[i].set_tip(tip);
		mass[i].set_diagonal(diagonal);

		cout << endl;
	}

	// выводим информацию на экран c помощью встроенных методов получения информации
	for (int i = 0; i < 5; i++) {
		cout << "firma: " << mass[i].get_firma()
			<< " | tip: " << mass[i].get_tip()
			<< " | diagonal: " << mass[i].get_diagonal()
			<< endl;
	}

	_getch();
	return 0;
}