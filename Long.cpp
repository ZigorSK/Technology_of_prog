#include "Long.h"

Long::Long()
{
	arr_ptr = nullptr;
	size = 0;

}

Long::Long(int len  = 5)
{
	arr_ptr = new long int[len];
	size = len;

	for (int i = 0; i < len; i++)
	{
		cout << "Введите элемент типа long int:";
		cin >> *(arr_ptr + i);
		cout << endl;
	}
	
}

Long::Long(const Long &obg)
{
	arr_ptr = new long int[obg.size];//Выделяем память для нового объекта

	long int *ptr = obg.arr_ptr;

	for (int i = 0; i < obg.size; i++)//копируем значения в новый объект
	{
		*(arr_ptr + i) = *(ptr + i);
	}
	size = obg.size;
}

Long::~Long()
{
	delete[]arr_ptr;
}

inline long int * Long::get_arr_ptr()	{	return arr_ptr;	}
inline int Long::get_size(){	return size;}
inline void Long::set_arr_ptr(long int *p){		arr_ptr = p;}
inline void Long::set_size(int a){	size = a;}

Long & Long::operator+(Long &obg)
{
	Long &l = obg;

	if (size == obg.get_size())
	{
		for(int i = 0; i< size; i++)
			*(l.get_arr_ptr() + i) += *(arr_ptr + i);
	}
	else
	{
		if (size > obg.get_size())// Складываем  obg.get_size() первых элементов obg c obg.get_size() первых элементов this
		{
			for (int i = 0; i < obg.get_size(); i++)
				*(l.get_arr_ptr() + i) += *(arr_ptr + i);
		}
		else
		{
			for (int i = 0; i < size; i++)
				*(l.get_arr_ptr() + i) += *(arr_ptr + i);
		}
	}
	return l;
}
Long & Long::operator/(Long & obg)
{
	Long &l = *this;
	if (size == obg.get_size())
	{
		for (int i = 0; i < size; i++)
		{
			if (*(obg.get_arr_ptr() + i) != 0)
			{
				*(l.get_arr_ptr() + i) /= *(obg.get_arr_ptr() + i);
			}
			else
			{
				cout << "Деление на 0!!! Деление данных элементов не было выполнено!" << endl;
			}
		}
	}
	else
	{
		if (size > obg.get_size())// см. предыдущие перегрузки, всё аналогично
		{
			for (int i = 0; i < obg.get_size(); i++)
			{
				if (*(obg.get_arr_ptr() + i) != 0)
				{
					*(l.get_arr_ptr() + i) /= *(obg.get_arr_ptr() + i);
				}
				else
				{
					cout << "Деление на 0!!! Деление данных элементов не было выполнено!" << endl;
				}
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				if (*(obg.get_arr_ptr() + i) != 0)
				{
					*(l.get_arr_ptr() + i) /= *(obg.get_arr_ptr() + i);
				}
				else
				{
					cout << "Деление на 0!!! Деление данных элементов не было выполнено!" << endl;
				}
			}
		}
	}
	return l;
}
Long & operator-(Long & obg, long int d)
{
	Long &l = obg;

	for (int i = 0; i < obg.get_size(); i++)
		*(l.get_arr_ptr() + i) -= d;

	return l;
}

Long & operator*(Long & obg, int d)
{
	Long &l = obg;

	for (int i = 0; i < obg.get_size(); i++)
		*(l.get_arr_ptr() + i) *= d;

	return l;
}
Long & operator*(int d, Long & obg)
{
	Long &l = obg;

	for (int i = 0; i < obg.get_size(); i++)
		*(l.get_arr_ptr() + i) *= d;

	return l;
}


void Long::show()
{
	cout << "     Array of long integers" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr_ptr + i) << endl;
	}
	system("pause");
}
