//
//  mallocPrec02.c
//  C_Programming
//
//  Created by 김재우 on 11/18/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* pArray;
    char* pCahr;
    int count;
    
    scanf("%d", &count);
    pArray = (int*)malloc(sizeof(int)*count);
    
    for(int i = 0; i<count; i++)
        pArray[i] = i;
    
    for(int i = 0; i<count; i++)
        printf("%d ", pArray[i]);
    
    pCahr = (char*)pArray;
    
    while (getchar() != '\n');
    
    gets(pCahr);
    puts(pCahr);
    
    return 0;
        
}
