//
//  strPrectice_03.c
//  C_Programming
//
//  Created by SamoYed on 10/4/24.
//

#include <stdio.h>
#include <string.h>

int main(void){
        
    char src[100];
    char dest[100];
    int result;
//    gets(src); github보안 에러로 인하여 주석처리 하였습니다.
//    gets(dest);
    
    result = strcmp(src, dest);
    printf("result = %d\n", result);
    
    return 0;
}
