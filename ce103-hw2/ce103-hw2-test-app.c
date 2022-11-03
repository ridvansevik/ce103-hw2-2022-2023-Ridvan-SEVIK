#ifdef _WIN64
	#ifdef _DEBUG
		#pragma comment(lib, "..\\x64\\Debug\\ce103-hw2-lib.lib")
	#else
		#pragma comment(lib, "..\\x64\\Release\\ce103-hw2-lib.lib")
	#endif
#else
	#ifdef _DEBUG
		#pragma comment(lib, "..\\Debug\\ce103-hw2-lib.lib")
	#else
		#pragma comment(lib, "..\\Release\\ce103-hw2-lib.lib")
	#endif
#endif

#include "..\ce103-hw2-lib\ce103-hw2-lib.h"
#include <stdio.h>

int main()
{
	printf("CE103 Algorithms and Programming I HW-2\n");

	getch();

}
