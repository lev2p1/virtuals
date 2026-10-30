// virtual.cpp: определяет точку входа для приложения.
//

#include "virtual.h"
#include "include/shape.hpp"
#include "include/exception.hpp"

int main() {
	try {
		vt::circle crc(13);
		std::cout << crc.getSquare() << std::endl;
		throw vt::runtime_error("message");
	}
	catch (vt::exception& e) {
		std::cout << e.what() << std::endl;
		e.printName();
		std::cout << typeid(e).name();
	}
}

