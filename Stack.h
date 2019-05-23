#pragma once
#ifndef _Steak_H_

#include"Node.h" >
#include<iostream>
#include<iomanip>

using namespace std;

#define _Steak_H_

class Stack
{
	Node *hight_stack_ptr;// Верхушка стэка

public:
	Stack();
	explicit Stack(int d);//Конструктор с параметром. Параметр - количество изначальных элементов стэка(вводятся с клавиатуры)
	Stack(const Stack &obg);//Конструктор копирования

	Node *get_hight_stack_ptr();
	void push(float d);// метод добавления элемента в стэк
	float pop();//извлечение элемента из стэка
	void show();//
	friend  Stack &operator++(Stack &op, int a);
	friend  Stack &operator--(Stack &op, int a);
	Stack & operator !();// Получает отрицательное значение каждого элемента
	Stack & operator --();//уменьшает на 1 каждый элемент
	Stack & operator ++();//увеличивает на 1 каждый элемент
	Stack & operator =(Stack &obg);

};

#endif