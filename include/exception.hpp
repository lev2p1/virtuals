#include <iostream>

namespace vt {
	class exception {
		std::string message;

	public:
		explicit exception() = delete;
		explicit exception(std::string what) {
			message = what;
		}

		std::string what() { return message; }
		virtual void printName() {
			std::cout << "Base exception\n";
		}

		virtual ~exception() = default;
	};

	class runtime_error : public exception {
		using _Base = exception;

	public:
		explicit runtime_error() = delete;
		explicit runtime_error(std::string what) : _Base(what) {}

		void printName() override {
			std::cout << "runtime_error exception\n";
		}
	};
}