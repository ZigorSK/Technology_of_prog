#pragma once
#ifndef _Long_H_

#include <iostream>

using namespace std;

#define _Long_H_

class Long
{
	long int *arr_ptr;//Указатель на массив
	int size;//Размер массива

public:
	Long();
	explicit Long(int len );// аргумент - количество элементов массива, конструктор выделяет память и инициализирует массив
	Long(const Long &obg);
	~Long();

	long int *get_arr_ptr();
	int get_size();
	void set_arr_ptr(long int *);
	void set_size(int);

	Long & operator +(Long &);
	friend Long & operator -(Long &o1, long int d);
	Long & operator/(Long & o);
	friend Long & operator *(Long &obg,int d);
	friend Long & operator *(int d, Long &obg);

	void show();


	
};

#endif