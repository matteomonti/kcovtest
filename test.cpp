#include <iostream>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int j;
	for(int i = 0; i < rand() % 1000000; i++)
		j += rand();

	fork();

	for(int i = 0; i < rand() % 1000000; i++)
                j += rand();

	std :: cout << j << std :: endl;
}
