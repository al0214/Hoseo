//
//  ABC.c
//  C_Programming
//
//  Created by SamoYed on 6/10/24.
//

#include <stdio.h>
void copyArray(int* dest, int* src, int size){
    for(int i = 0; i<size; i++){
        *(dest+i) = *(src+i);
    }
}
int main(void){
    
    int input[10] = {35, 45, 32, 27, 76, 88, 13, 46, 98, 77};
    int sum =0;
    for(int i = 0; i<10; i++){
        sum += input[i];
    }
    
    printf("%d", sum);
    printf("%d", 35+45+32+27+76+88+13+46+98+77);
    return 0;
}
