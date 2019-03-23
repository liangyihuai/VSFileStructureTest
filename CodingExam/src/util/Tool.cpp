#include "Tool.h"

#include <iostream>

#include "../com/Person.h"

Tool::Tool()
{
}


Tool::~Tool()
{
}


void Tool::doSomething() {
	std::cout << "do something" << std::endl;
	Person p;
	p.speak();

	Person * person = new Person();
	person->speak();
}