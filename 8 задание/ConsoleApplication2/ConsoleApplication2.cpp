// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int i = 365;
	int j = 7;
	i = i + j - i % j;
	printf("%i", i);
    return 0;
}

