//
//  exam_5.c
//  C_Programming
//
//  Created by SamoYed on 4/21/24.
//

#include <stdio.h>
int main(void){
    
    int a=0, b=0;
    
    scanf("%d %d", &a, &b);
    
    if(a>b){
        for (int i =b; a>=b; ++b) {
            printf("%d ", b);
        }
    }
    
    return 0;
}
