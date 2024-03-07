//
//  01.c
//  07
//
//  Created by SamoYed on 3/7/24.
//

#include <stdio.h>


int main (void){
    
    int choice ,num1, num2;
    
    printf("계산기 프로그램이 시작됩니다. \n");
    
    printf("더하기 : 1\n빼기 : 2\n곱하기 : 3 \n원하는 수식을 입력해 주세요 : ");
    scanf("%d", &choice);
    
    printf("첫번째 숫자를 입력해주세요 : ");
    scanf("%d", &num1);

    printf("두번째 숫자를 입력해주세요 : ");
    scanf("%d", &num2);

    switch (choice) {
        case 1:
            printf("%d + %d = %d \n", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d + %d = %d \n", num1, num2, num1-num2);
            break;
        case 3:
            printf("%d + %d = %d \n", num1, num2, num1/num2);
            break;
            
        default:
            printf("잘못된 입력입니다.");
            break;
    }
};
