#pragma once
#ifndef _Steak_H_

#include"Node.h" >
#include<iostream>
#include<iomanip>

using namespace std;

#define _Steak_H_

class Stack
{
	Node *hight_stack_ptr;// �������� �����

public:
	Stack();
	explicit Stack(int d);//����������� � ����������. �������� - ���������� ����������� ��������� �����(�������� � ����������)
	Stack(const Stack &obg);//����������� �����������

	Node *get_hight_stack_ptr();
	void push(float d);// ����� ���������� �������� � ����
	float pop();//���������� �������� �� �����
	void show();//
	friend  Stack &operator++(Stack &op, int a);
	friend  Stack &operator--(Stack &op, int a);
	Stack & operator !();// �������� ������������� �������� ������� ��������
	Stack & operator --();//��������� �� 1 ������ �������
	Stack & operator ++();//����������� �� 1 ������ �������
	Stack & operator =(Stack &obg);

};

#endif