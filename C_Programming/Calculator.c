//
//  01.c
//  07
//
//  Created by SamoYed on 3/7/24.
//

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int duplicate(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int calcu(int a, char b, int c) {
    switch (b) {
        case '+':
            return sum(a, c);
        case '-':
            return minus(a, c);
        case '/':
            return duplicate(a, c);
        case '*':
            return division(a, c);
        default:
            return 0;
    }
}

int main(void) {
    int num1, num2;
    char susic;

    printf("계산기 프로그램이 시작됩니다. \n");
   
    printf("원하는 수식을 입력해 주세요 : ");
    scanf("%d %c %d", &num1, &susic, &num2);

    printf("%d %c %d = %d \n", num1, susic, num2, calcu(num1, susic, num2));
};
