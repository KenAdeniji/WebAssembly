#include <stdio.h>
#include <emscripten.h> // note we added the emscripten header

/*
	2021-08-06T17:34:00 https://www.tutorialspoint.com/webassembly/webassembly_working_with_cplusplus.htm
*/
int EMSCRIPTEN_KEEPALIVE reverseNumber(int entry) 
{
	int reverse=0, remainder; 
	while( entry !=0 ) 
	{ 
	  remainder = entry % 10;
	  reverse = reverse * 10 + remainder;
	  entry /= 10; 
	} 
	printf("%d", reverse);
	return reverse; 
}

int main()
{
    return 0;
}
