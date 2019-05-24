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
		cout << "[1] Задание-Стэк." << endl << "[2] Задание - Класс целых чисел long." << endl<<"[0] Выход из программы."<<endl;
		cin >> choice;

		system("cls");
		switch (choice)
		{
		case 1: 
		{
			int d = 0, choice1 =0;


			cout << "Введите изначальное количество элементов стэка:";
			cin >> d;
			cout << endl;

			Stack q1(d);
			q1.show();
			system("pause");

			do {

				system("cls");
				cout << "[1] Получить отрицательные значения элементов(перегружен оператор !)" << endl << "[2] Уменьшить все элементы на 1(Префиксный оператор --)." << endl << "[3] Увеличить значение всех эелементов на 0.5(Оператор ++ (Префиксная форма))." << endl << "[4] Извлечь элемент из стэка( Оператор --(Постфиксная форма))." << endl << "[5] Добавить элемент в стэк(Оператор ++ (Постфиксная форма))." << endl <<  "[0] Прейти к другому заданию или выйти." << endl;
				cin >> choice1;
				
				system("cls");
				switch (choice1)
				{
				case 1:
				{
					Stack q2;
					cout << "Стэк q1 до изменения:" << endl;
					q1.show();
					system("pause");
					q2 = !q1;
					cout << "Стэк q1 после изменения(q2 = !q1)." << endl;
					q1.show();
					cout << "Стэк q2 после изменения(q2 = !q1)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 2: {
					Stack q2;
					cout << "Стэк q1 до изменения:" << endl;
					q1.show();
					system("pause");
					q2 = --q1;
					cout << "Стэк q1 после изменения(q2 = --q1)." << endl;
					q1.show();
					cout << "Стэк q2 после изменения(q2 = --q1)." << endl;
					q2.show();
					system("pause");

					break;
				}
				case 3:
				{
					Stack q2;
					cout << "Стэк q1 до изменения:" << endl;
					q1.show();
					system("pause");
					q2 = ++q1;
					cout << "Стэк q1 после изменения(q2 = ++q1)." << endl;
					q1.show();
					cout << "Стэк q2 после изменения(q2 = ++q1)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 4:
				{
					Stack q2;
					cout << "Стэк q1 до изменения:" << endl;
					q1.show();
					system("pause");
					q2 = q1--;
					cout << "Стэк q1 после изменения(q2 = q1--)." << endl;
					q1.show();
					cout << "Стэк q2 после изменения(q2 = q1--)." << endl;
					q2.show();
					system("pause");
					break;
				}
				case 5:
				{
					Stack q2;
					cout << "Стэк q1 до изменения:" << endl;
					q1.show();
					system("pause");
					q2 = q1++;
					cout << "Стэк q1 после изменения(q2 = q1++)." << endl;
					q1.show();
					cout << "Стэк q2 после изменения(q2 = q1++)." << endl;
					q2.show();
					system("pause");
					break;
				}

				case 0:
					break;

				default: 
					cout << "Введена неправильная команда, введите ещё раз!!!" << endl;
					break;
				}
			} while (choice1);
			
			break;
		}
		case 2: 
		{
			int choice2 = 0;
			long int d;
			cout << "Введите количество элементов первого объекта:";
			cin >> d;
			cout << endl;
			Long q1(d);
			cout << "Введите количество элементов второго объекта:";
			cin >> d;
			cout << endl;
			Long q2(d);
			do {


				system("cls");
				cout << "[1] Сложение двух экземпляров класса(Оператор +)." << endl << "[2] Вычитание чисел(Оператор -)." << endl << "[3] Поделить один обьект класса на другой обьект класса (Оператор /)." << endl << "[4] Умножение объекта класса на число (Оператор *)." << endl << "[5] Вывод на экран данных из объектов( вычитание и умножение происходит с объектом q1)." << endl << "[0] Прейти к другому заданию ил выйти." << endl;
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
					cout << "Введите число, которое необходимо вычесть:";
					cin >> d;
					Long q3 = q1 - d;
					q3.show();

					break;
				}
				case 3: {
					cout << "Внимание, будет выполнено деление Long int на Long int => будет взята целая часть от деления, а остаток отброшен!!!" << endl;
					Long q3 = q1 / q2;
					q3.show();

					break;
				}
				case 4: {
					long int d = 0;
					cout << "Введите число, на которое необходимо умножить:";
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

				default: cout << "Введена неправильная команда введите ещё раз!!!" << endl;
				}
			} while (choice2);
			break;
		}
		
		}

	} while (choice);


	return 0;
}
