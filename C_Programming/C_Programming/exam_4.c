//
//  exam_4.c
//  C_Programming
//
//  Created by SamoYed on 4/21/24.
//

#include <stdio.h>

int main(void){
    int a=0,c=0;
    
    scanf("%d", &a);
    
    
    while (c<5) {
        if(a%2==1){
            printf("%d ", a);
            c++;
        }
        a++;
    }
    
    return 0;
}
