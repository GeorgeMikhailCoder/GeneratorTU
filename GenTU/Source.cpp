#include<fstream>
#include<time.h>
#include<iostream>
#include <conio.h>
#include<string>
#include<Windows.h>
#include<stdio.h>


using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	fstream TU;
	TU.open("TU.txt");
	if (!TU.is_open()) // ���� ���� �� ������
		cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	else
	{
		TU.clear();
		int predelTU;
		cout << "������� ������ ����������:" << endl;
		cin >> predelTU;

		int k;
		cout << "������� ���������� ��������:" << endl;
		cin >> k;

		bool otvet = 0;
		cout << "� ��������?  (1 - ��, 0 - ���)" << endl;
		cin >> otvet;

		srand(time_t(NULL));
		int a = 0;
		int b = 0;
		for (int i = 1; i <= k; i++)
		{
			a = rand() % 8+2;
			b = rand() % (predelTU-2)+2;
			TU << i << ")  " << b << " x " << a << " = ";
			cout << i << ")  " << b << " x " << a << " = ";
			if (otvet == 1)
			{
				TU << a*b << endl;
				cout<< a*b << endl;
			}
			else
			{
				TU << endl;
				cout << endl;
			}
			
		}
		TU.close();
	}
	system("pause");
}