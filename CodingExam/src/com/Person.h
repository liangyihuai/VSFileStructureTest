#pragma once

#include "Book.h"

class Person
{
public:
	Person();
	~Person();

	void speak();
	void read(Book &book);
};

