
//Yunfei Li
//Homework 2
//CS5040
#include "Sequence.h"
#include "cassert"
#include "iostream"
using namespace std;

Sequence::Sequence()
{
	current_index = 0;
	used = 0;
}

void Sequence::start()
{
	current_index = 0;
}

void Sequence::advance()
{
	if (is_item())
	{
		current_index++;
	}
}

void Sequence::insert(const value_type & entry)
{
	assert(size() < CAPACITY);
	//checking to make sure there's nothing there
	if (!is_item()) 
	{
		//create an new index
		start();
	}
	
	for (size_t i = used; i > current_index; i--)
	{
		data[i] = data[i - 1];
	}

	data[current_index] = entry;

	used++;
}

void Sequence::attach(const value_type & entry)
{
	assert(size() < CAPACITY);
	if (is_item())
	{
		for (size_t i = used; i > current_index + 1; i--)
		{
			data[i] = data[i - 1];
		}

		data[current_index + 1] = entry;

		current_index++;

		used++;
	}
	else
	{
		data[used] = entry;
		current_index = used;
		used++;
	}
}

void Sequence::remove_current()
{
	if (is_item())
	{

		for (size_t i = current_index; i < used; i++)
		{
			data[i] = data[i + 1];
		}

		used--;
	}
	else
	{
		cout << "NO CURRENT ITEM" << std::endl;
	}
}

Sequence::size_type Sequence::size() const
{
	return used;
}

bool Sequence::is_item() const
{
	return current_index < used;
}

Sequence::value_type Sequence::current() const
{
	return data[current_index];
}


