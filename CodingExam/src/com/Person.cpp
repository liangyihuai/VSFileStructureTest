#include "Person.h"
#include <iostream>



Person::Person()
{
}


Person::~Person()
{
}

void Person::speak() {
	std::cout << "speak something" << std::endl;
}

void Person::read(Book &book) {
	std::cout << "A person is reading book." << std::endl;
	book.display();
}