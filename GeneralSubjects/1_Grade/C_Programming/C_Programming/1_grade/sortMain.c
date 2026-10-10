//
//  sortMain.c
//  C_Programming
//
//  Created by SamoYed on 5/21/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void){
   
    int number[SIZE] = {0};
    int most;
    int temp;
    srand((unsigned int)time(NULL));
    
    for(int i=0; i<SIZE; i++){
        number[i] = (rand() % 10000)+1;
    }
    
    for(int i=0; i<SIZE-1; i++){
        most = i;
        for(int j = i+1; j < SIZE; j++){
            if(number[most] < number[j]) most = j;
        }
        temp = number[i];
        number[i] = number[most];
        number[most] = temp;
    }
    
    for(int i=0; i<SIZE; i++){
        printf("%5d\t", number[i]);
        if((i+1)%10==0) printf("\n");
    }
    
    
    return 0;
}
