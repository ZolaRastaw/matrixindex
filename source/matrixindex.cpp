// indices.cpp : Defines the entry point for the application.
//

#include "matrixindex.h"
#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
#define row 10
#define column 10

int main()
{


	srand(time(NULL));

	int a[row][column], i, j;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < column; ++j)
		{
			a[i][j] = rand() % 10;
		}
	}
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < column; ++j)
			std::cout << a[i][j] << '\t';
		std::cout << '\n';
	}

	cout << "Hello CMake." << endl;
	return 0;
}