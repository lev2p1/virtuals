#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

namespace vt {

	class shape {
	public:
		virtual double getSquare() = 0;
		virtual double getPerimetr() = 0;
	};

	class circle : public shape {
		double radius;
	
	public:
		explicit circle(double radius) : radius(radius) {}

		double getSquare() override {
			return M_PI * radius * radius;
		}

		double getPerimetr() override {
			return 2 * M_PI * radius;
		}
	};
}