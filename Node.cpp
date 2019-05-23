#include "Node.h"



Node::Node()
{
	data = 0;
	next_ptr = nullptr;
}

Node::Node(float d )
{
	data = d;
	next_ptr = nullptr;
}

float Node::get_data()
{
	return data;
}

Node * Node::get_next_ptr()
{
	return next_ptr;
}

void Node::set_data(float d)
{
	data = d;
}

void Node::set_next_ptr(Node * ptr)
{
	next_ptr = ptr;
}
