#pragma once
#ifndef _Node_H_

#define _Node_H_

class Node
{
	float data;
	class Node *next_ptr;
public:
	Node();// онструктор по умолчанию
	explicit Node(float d);// онструктор с параметром(инициализируетс€ только €вным образом

	//getters
	float get_data();
	Node *get_next_ptr();

	//setters
	void set_data(float);
	void set_next_ptr(Node *);
};

#endif
