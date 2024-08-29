/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void input_random(int * value, int count);
void print_calue(int value[], int count);

int main()
{
    srand((unsigned int) time(NULL));
    int arr[5] = {0};
    input_random(arr, 5);
    print_calue(&arr[0], 5);

    return 0;
}


void input_random(int * value, int count){
    for(int i=0; i<count; i++){
        value[i] = rand()%101;
    }
}

void print_calue(int value[], int count){
    for(int i=0; i<count; i++){
        printf("%d ", *(value+i));
    }
}