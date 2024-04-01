//
//  Intiger.c
//  C_Programming
//
//  Created by SamoYed on 3/18/24.
//

#include <stdio.h>

int main(void) {
    int num1, num2, sum;
    
    printf("첫번째 수를 입력해 주세요 : ");
    scanf("%d", &num1);
    
    printf("두번째 수를 입력해 주세요 : ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
    printf("%d * %d = %d \n", num1, num2, num1 / num2);
    
    return 0;
}
