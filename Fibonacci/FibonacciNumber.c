#include <stdio.h>
#include <emscripten.h> // note we added the emscripten header

/*
	2022-05-31T15:50:00 http://medium.com/@tdeniffel/pragmatic-compiling-from-c-to-webassembly-a-guide-a496cc5954b8
*/

#include "FibonacciHelper.c"

int EMSCRIPTEN_KEEPALIVE fibonacciNumber(int entry) 
{
	int result = fibonacci( entry );
/*
	printf
	(
		"fibonacci(%d) = %d",
		entry,
		result
	);
*/	
	return result; 
}

int main()
{
    return 0;
}
