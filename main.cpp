#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 5. ��������� �����." << endl;
	cout << "---------------------------------" << endl << endl;

	float temp, res = 0;
	int km,result;

	cout << "������, ���! ������� ����������� �� ������� ��������? ";
	cin >> km;

	for (int i = 1; i <= km; i++) {
		cout << "����� � ���� ��� ���� �� ���������� " << i << "? ";
		cin >> temp;
		res += temp;
	}

	cout << "�����: " << endl << endl;

	res = res / km;
	result = round(res);

	cout << "���� ������� ���� �� ����������: " << result / 60 << " �����(�) " << result % 60 << " ������(�)." << endl;
}