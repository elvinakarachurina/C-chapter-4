// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int i = 12.258;
	int j = 23;
	i = i + j - i % j;
	printf("%i", i);
    return 0;
}

