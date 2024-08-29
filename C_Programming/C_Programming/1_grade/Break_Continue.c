//
//  Break_Continue.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>

void exec1(void);

int main(void){
    exec1();
    return 0;
}

void exec1(void){
    int sum = 0;
    int input = 0;
    while (1) {
        scanf("%d", &input);
        if(input == -1) break;
        if(input % 2 != 0) continue;
        if(input % 10 == 0) continue;
        sum += input;
    }
    printf("sum = %d\n", sum);
}
