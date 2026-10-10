//
//  ABCDE.c
//  C_Programming
//
//  Created by SamoYed on 6/10/24.
//

#include <stdio.h>
int main(void){
    int i = 100;
    int* p = &i;
    
    
    printf("%d\n", p);
    printf("%u\n", (*p)++);
    return 0;
}
