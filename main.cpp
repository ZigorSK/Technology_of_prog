#include "Header.h"
#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int choice = 0;



	do {

		system("cls");
		cout << "[1] �������-����." << endl << "[2] ������� - ����� ����� ����� long." << endl<<"[0] ����� �� ���������."<<endl;
		cin >> choice;

		system("cls");
		switch (choice)
		{
		case 1: 
		{
			int d = 0, choice1 =0;


			cout << "������� ����������� ���������� ��������� �����:";
			cin >> d;
			cout << endl;

			Stack q1(d);
			q1.show();
			system("pause");

			do {

				system("cls");
				cout << "[1] �������� ������������� �������� ���������(���������� �������� !)" << endl << "[2] ��������� ��� �������� �� 1(���������� �������� --)." << endl << "[3] ��������� �������� ���� ���������� �� 0.5(�������� ++ (���������� �����))." << endl << "[4] ������� ������� �� �������( �������� --(����������� �����))." << endl << "[5] �������� ������� � �������(�������� ++ (����������� �����))." << endl <<  "[0] ������ � ������� ������� �� �����." << endl;
				cin >> choice1;
				

				switch (choice1)
				{
				case 1:
				{
					Stack q2;
					cout << "���� q1 �� ���������:" << endl;
					q1.show();
					system("pause");
					q2 = !q1;
					cout << "���� q1 ����� ���������(q2 = !q1)." << endl;
					q1.show();
					cout << "���� q2 ����� ���������(q2 = !q1)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 2: {
					Stack q2;
					cout << "���� q1 �� ���������:" << endl;
					q1.show();
					system("pause");
					q2 = --q1;
					cout << "���� q1 ����� ���������(q2 = --q1)." << endl;
					q1.show();
					cout << "���� q2 ����� ���������(q2 = --q1)." << endl;
					q2.show();
					system("pause");

					break;
				}
				case 3:
				{
					Stack q2;
					cout << "���� q1 �� ���������:" << endl;
					q1.show();
					system("pause");
					q2 = ++q1;
					cout << "���� q1 ����� ���������(q2 = ++q1)." << endl;
					q1.show();
					cout << "���� q2 ����� ���������(q2 = ++q1)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 4:
				{
					Stack q2;
					cout << "���� q1 �� ���������:" << endl;
					q1.show();
					system("pause");
					q2 = q1--;
					cout << "���� q1 ����� ���������(q2 = q1--)." << endl;
					q1.show();
					cout << "���� q2 ����� ���������(q2 = q1--)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 5:
				{
					Stack q2;
					cout << "���� q1 �� ���������:" << endl;
					q1.show();
					system("pause");
					q2 = q1++;
					cout << "���� q1 ����� ���������(q2 = q1++)." << endl;
					q1.show();
					cout << "���� q2 ����� ���������(q2 = q1++)." << endl;
					q2.show();
					system("pause");
					break;
				}

				case 0:
					break;

				default: 
					cout << "������� ������������ �������, ������� ��� ���!!!" << endl;
					break;
				}
			} while (choice1);
			
			break;
		}
		case 2: 
		{
			int choice2 = 0;
			long int d;
			cout << "������� ���������� ��������� ������� �������:";
			cin >> d;
			cout << endl;
			Long q1(d);
			cout << "������� ���������� ��������� ������� �������:";
			cin >> d;
			cout << endl;
			Long q2(d);
			do {


				system("cls");
				cout << "[1] �������� ���� ����������� ������(�������� +)." << endl << "[2] ��������� �����(�������� -)." << endl << "[3] �������� ���� ������ ������ �� ������ ������ ������ (�������� /)." << endl << "[4] ��������� ������� ������ �� ����� (�������� *)." << endl << "[5] ����� �� ����� ����������� ��������( ��������� � ������� ���������� � �������� q1)." << endl << "[0] ������ � ������� ������� �� �����." << endl;
				cin >> choice2;
				system("cls");
				switch (choice2)
				{
				case 1: {
					Long q3 = q1 + q2;
					q3.show();
					break;
				}
				case 2: {
					long int d = 0;
					cout << "������� �����, ������� ���������� �������:";
					cin >> d;
					Long q3 = q1 - d;
					q3.show();

					break;
				}
				case 3: {
					cout << "��������, ����� ��������� ������� Long int �� Long int => ����� ����� ����� ����� �� �������, � ������� ��������!!!" << endl;
					Long q3 = q1 / q2;
					q3.show();

					break;
				}
				case 4: {
					long int d = 0;
					cout << "������� �����, �� ������� ���������� ��������:";
					cin >> d;
					Long q3 = q1 * d;
					q3.show();

					break;
				}
				case 5:
					q1.show();
					q2.show();
					break;
				case 0: break;

				default: cout << "������� ������������ ������� ������� ��� ���!!!" << endl;
				}
			} while (choice2);
			break;
		}
		
		}

	} while (choice);


	return 0;
}