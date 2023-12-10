// test6.cpp : Defines the entry point for the application.
//

#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
	printf("compile-flags:cmake\r\n");
	// only print if compile flag set
#ifdef EX2
	printf("Hello Compile Flag EX2!\r\n");
#endif

#ifdef EX3
	printf("Hello Compile Flag EX3!\r\n");
#endif
	return 0;
}
