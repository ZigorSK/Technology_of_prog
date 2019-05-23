#include "Stack.h"




Stack::Stack()
{
	hight_stack_ptr = nullptr;
}

Stack::Stack(int d = 0)
{
	float dat;
	hight_stack_ptr = nullptr;

	for (int i = 0; i < d; i++)
	{
		cout << "Введите элемент, добавляемый в стэк" << endl;
		cin >> dat;
		this->push(dat);
	}
}

Stack::Stack(const Stack &obg)
{
	hight_stack_ptr = nullptr;
	
	Node *ptr = obg.hight_stack_ptr;


	int count = 0;
	double *arr = nullptr;

	while (ptr)
	{
		count++;
		ptr = ptr->get_next_ptr();
	}
	arr = new double[count];
	ptr = obg.hight_stack_ptr;//записываем значения стэка в массив 1 эл -дно последний - верхушка
	for (int i = 0; i < (count); i++)
	{
		*(arr + count - i - 1) = ptr->get_data();
		ptr = ptr->get_next_ptr();
	}

	for (int i = 0; i < count; i++)
	{
		push(*(arr + i));
	}

	delete arr;
	
}

inline Node *Stack::get_hight_stack_ptr()
{
	return hight_stack_ptr;
}

void Stack::push(float d = 10 )//Добавление элемента в стэк
{

	if (hight_stack_ptr != nullptr)//Если ранее были добавлены элементы
	{
		Node *ptr = nullptr;

		ptr = new Node;

		ptr->set_next_ptr(hight_stack_ptr);
		ptr->set_data(d);
		hight_stack_ptr = ptr;
	}
	else//Если добавляемый элемент первый
	{
		hight_stack_ptr = new Node;
		hight_stack_ptr->set_next_ptr(nullptr);
		hight_stack_ptr->set_data(d);
	}
}
float Stack::pop()//Извлечение элемента из стэка
{
	float d = 0;

	if (hight_stack_ptr != nullptr)//Если элементы ещё есть
	{
		d = hight_stack_ptr->get_data();
		cout << "Элемент " << d << "Извлечён из стэка" << endl;
		Node *ptr = hight_stack_ptr->get_next_ptr();

		delete hight_stack_ptr;
		hight_stack_ptr = ptr;
	}
	else
	{
		cout << "В стэке больше нет элементов" << endl;
	}

	return d;
}

void Stack::show()//Вывод стэка на экран
{
	Node *ptr = hight_stack_ptr;

	cout << setw(20) << "Top of stack:"<<endl;
	while (ptr)
	{
		cout << setw(20) << ptr-> get_data()<<endl;
		ptr = ptr->get_next_ptr();
	}
	cout << setw(20) << "Bottom of stack:" << endl;
	
}

Stack & Stack::operator!()//Получает отрицательное значение каждого элемента
{
	Node *ptr = hight_stack_ptr;

	while (ptr)
	{
		ptr->set_data(-ptr->get_data());
		ptr = ptr->get_next_ptr();
	}
	return *this;
}

Stack & Stack::operator--()//уменьшает на 1 каждый элемент
{
	Node *ptr = hight_stack_ptr;

	while (ptr)
	{
		ptr->set_data(ptr->get_data() - 1);
		ptr = ptr->get_next_ptr();
	}
	return *this;
}

Stack & Stack::operator++()//увеличивает на 1 каждый элемент
{	
	Node *ptr = hight_stack_ptr;

	while (ptr)
	{
		ptr->set_data((double)(ptr->get_data() + 0.5));
		ptr = ptr->get_next_ptr();
	}
	return *this;
}

Stack &Stack::operator=(Stack &obg)
{
	Node *ptr = obg.get_hight_stack_ptr();
	

	int count = 0;
	double *arr = nullptr;

	while(ptr)
	{
		count++;
		ptr = ptr->get_next_ptr();
	}
	arr = new double[count];
	ptr = obg.get_hight_stack_ptr();//записываем значения стэка в массив 1 эл -дно последний - верхушка
	for(int i = 0; i < (count);i++)
	{
		*(arr + count - i - 1 ) = ptr->get_data();
		ptr = ptr->get_next_ptr();
	}
	
	for (int i = 0; i < count; i++)
	{
		push(*(arr + i));
	}
	
	delete arr;
	 
	return *this;
}

Stack &operator++(Stack &op, int notused)//Добавляет элемент в стэк( оператор - постфиксный инкримент)
{
	static Stack res = op;

	float d = 0;
	cout << "Введите элемент стэка, который хотите добавить: " << endl;
	cin >> d;
	op.push(d);
	
	return res;
}
Stack &operator--(Stack & op, int a)//Удаляет элемент из стэка 
{
	static Stack res = op;
	op.pop();
	return res;
}