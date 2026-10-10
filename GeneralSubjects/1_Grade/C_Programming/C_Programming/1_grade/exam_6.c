//
//  exam_6.c
//  C_Programming
//
//  Created by SamoYed on 4/21/24.
//

#include <stdio.h>

int main(void) {
    int a = 0;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &a);
    
    for (int h=a; h<a; ) {
        <#statements#>
    }
    for(int i = a; i > 0; i--) {
        for (int c = i; c < a; c++) {
            printf(" ");
        }
        for (int b = i; b > 0; b--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

