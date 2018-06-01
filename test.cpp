#include <iostream>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int total = 0;
	srand(time(nullptr));
	for(int i = 0; i < rand() % 1000; i++)
		total += rand();

	return total;
}
