//
//  triangle.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>
void printStar(int count);
void printSpace(int count);
int main(void){
    
    int line;
    scanf("%d", &line);
    for (int i=0; i<line; i++) {
        printSpace(line-i-1);
        printStar(2*i+1);
        printf("\n");
    }
    
    return 0;
}

void printStar(int count){
    for(int i = 0; i < count; i++){
        printf("*");
    }
}
void printSpace(int count){
    for (int i=0; i<count; i++) {
        printf(" ");
    }
}

