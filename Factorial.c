//
//  Factorial.c
//  C_Programming
//
//  Created by SamoYed on 3/18/24.
//

#include <stdio.h>

int Fac(int a){
    int b = 0;
    for (int i = 0; i <= a; ++i) {
        b = b + i;
    }
    
    return b;
}

int main(void){
    int a;
    
    printf("팩토리얼을 구하고 싶은 수를 입력해 주세요 : ");
    scanf("%d", &a);
    
    printf("구해진 팩토리얼은 %d 입니다.\n",  Fac(a));
}


