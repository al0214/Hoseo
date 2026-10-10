//
//  Function.c
//  C_Programming
//
//  Created by SamoYed on 4/2/24.
//

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);

int getNumber(void);
void printNumber(int a);

#include <stdio.h>

int main(void){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    
    num1 = getNumber();
    num2 = getNumber();
    
//    printf("input number : ");
//    scanf("%d %d", &num1, &num2);
    
    sum = add(num1, num2);
    printNumber(sum);
    
    sum = sub(num1, num2);
    printNumber(sum);
    
    sum = multi(num1, num2);
    printNumber(sum);
    
    return 0;
}

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

int getNumber(void){
    int num = 0;
    
    printf("input number : ");
    scanf("%d",&num);
    
    return num;
}

void printNumber(int a){
    printf("result = %d \n", a);
}
