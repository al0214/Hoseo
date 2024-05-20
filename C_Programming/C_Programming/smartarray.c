/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int total[5] = {0};
    for(int i=0; i<10000; i++){
        total[rand() % 6]++;
    }
    
    for(int h = 0; h<6; h++){
        printf("%d\n", total[h]+1);
    }
    
    
    return 0;
}
