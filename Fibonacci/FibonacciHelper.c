#include "Fibonacci.h"

int fibonacci(int x) { //2022-05-31T19:35:00 https://medium.com/@tdeniffel/pragmatic-compiling-from-c-to-webassembly-a-guide-a496cc5954b8
	if (x < 1)
		return 0;
	if (x == 1)
		return 1;
	return fibonacci(x-1)+fibonacci(x-2);
}
