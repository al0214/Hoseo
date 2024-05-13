//
//  Ready.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>
void printStar(int count);
int main(void){
    int count;
    scanf("%d", &count);
    printStar(count);
    
    return 0;
}

void printStar(int count){
    
    
    for(int i = 0; i < count; i++){
        printf("*");
    }
}
