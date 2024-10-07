#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 5. Кенийский бегун." << endl;
	cout << "---------------------------------" << endl << endl;

	float temp, res = 0;
	int km,result;

	cout << "Привет, Сэм! Сколько киллометров ты сегодня пробежал? ";
	cin >> km;

	for (int i = 1; i <= km; i++) {
		cout << "Какой у тебя был темп на киллометре " << i << "? ";
		cin >> temp;
		res += temp;
	}

	cout << "Вывод: " << endl << endl;

	res = res / km;
	result = round(res);

	cout << "Твой средний темп за тренировку: " << result / 60 << " минут(ы) " << result % 60 << " секунд(ы)." << endl;
}