#pragma once

namespace vt {

	template <typename T>
	class smart_ptr {
		T* ptr = nullptr;

	public:
		smart_ptr(T* t): ptr(t) {}

		T* get() { return ptr; }

		~smart_ptr() { delete ptr; }

		T* operator->() {
			return get();
		}
	};
}