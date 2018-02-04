//Yunfei Li
//Homework 2
//CS5040

#ifndef SEQUENCECE_CLASS_H

#define SEQUENCECE_CLASS_H
#include <cstdlib>       // Provides size_t

using namespace std;

class Sequence

{

public:

	// TYPEDEFS and MEMBER CONSTANT

	typedef int value_type;

	typedef std::size_t size_type;

	static const size_type CAPACITY = 30;



	//CONSTRUCTOR

	Sequence();

	//MODIFICATION MEMBER FUNCTIONS

	void start();

	void advance();

	// insert entry before the current item

	void insert(const value_type& entry);

	// insert entry after the current item

	void attach(const value_type& entry);

	void remove_current();



	//CONSTANT MEMBER FUNCTIONS

	size_type size() const;

	bool is_item() const;

	value_type current() const;

private:

	value_type data[CAPACITY];

	size_type used;

	size_type current_index;

};

#endif