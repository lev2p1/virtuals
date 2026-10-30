// virtual.cpp: определяет точку входа для приложения.
//

#include "virtual.h"
#include "include/shape.hpp"
#include "include/exception.hpp"
#include "include/smart_ptr.hpp"

void print(vt::shape* sh) {
	std::cout << sh->getSquare() << std::endl;
}

void create_add_check() {
	int a;
	std::cin >> a;
	vt::smart_ptr<int> c(new int[10000000]);
	std::cin >> a;
}

int main() {
	try {
		vt::smart_ptr<vt::circle> c(new vt::circle(13));
		std::cout << c->getSquare() << '\n';
		create_add_check();
		int a;
		std::cin >> a;
		throw vt::runtime_error("test exception");
	}
	catch (vt::exception& e) {
		std::cerr << e.what() << '\n';
		e.printName();
		((vt::runtime_error*)&e)->some_method();
	}
}

