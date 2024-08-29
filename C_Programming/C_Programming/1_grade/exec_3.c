//
//  exec_3.c
//  C_Programming
//
//  Created by SamoYed on 4/18/24.
//

#include <stdio.h>

int main(void){
    int count = 1, input=0, sum=0;
    while(count==1){
        printf("더할 숫자를 입력해 주세요 : ");
        scanf("%d", &input);
        sum += input;
        
        printf("계속 더하실 건가요 : ");
        scanf("%d", &count);
    }
    printf("sum : %d\n", sum);
}
