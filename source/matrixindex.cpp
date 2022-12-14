// matrixindex.cpp : Defines the entry point for the application.
//

#include "matrixindex.h"
#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <random>

// C++ program for generating a random number in a given range.


#define rows 15
#define cols 15
int a[rows][cols], i, j;
int main()
{
    

        int min = -100;
        int max = 100;
        
        // seed for random generator
        srand(time(NULL));
            for (i = 0; i < rows; i++)
             {
                for (j = 0; j < cols; j++)
                {           
                    //a[i][j] = rand(10)- 5; // lie b/w 1 to 500;
                   a[i][j] = min + rand() % ( max - min + 1 );
                    
                }
            
            }
          
                for (i = 0; i < rows; i++)
                {
                    for (j = 0; j < cols; j++)
                        std::cout << a[i][j] << '\t';
                    std::cout << '\n';
                }
        
    
             
  
    return 0;
}