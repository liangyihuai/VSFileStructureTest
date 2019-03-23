#include <iostream>
#include "../com/Person.h"
#include "../util/Tool.h"

using namespace std;

int main() {
	Person p;
	p.speak();

	Tool t;
	t.doSomething();

	Book book;
	p.read(book);

	system("pause");
	return 0;
}

