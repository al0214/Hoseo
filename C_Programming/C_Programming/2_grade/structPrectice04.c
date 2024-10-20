//
//  structPrectice04.c
//  C_Programming
//
//  Created by SamoYed on 10/20/24.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100

typedef struct point{
    int x;
    int y;
} POINT;

int main(void){
        
    POINT point[SIZE] = {0};
    POINT temp = {0, 0};
    int least;
    
    srand((unsigned)time(NULL));
    
    for(int i = 0; i<SIZE; i++){
        point[i].x = rand() % 101;
        point[i].y = rand() % 101;
    }
    
    for(int i = 0; i<SIZE; i++){
        printf("point[%3d] : (%3d, %3d)\n", i, point[i].x, point[i].y);
    }
    
    for(int i = 0; i<SIZE-1; i++){
        least = i;
        for(int j = i+1; j<SIZE; j++){
            if(point[least].x > point[j].x) least = j;
            else if (point[least].x == point[j].x && point[least].y > point[j].y) least = j;
        }
        temp = point[least];
        point[least] = point[i];
        point[i] = temp;
    }
    
    printf("after sorting >>>>>>>>>>>>>>>>>>>\n");
    for(int i=0; i<SIZE; i++){
        printf("point[%3d] : (%3d, %3d)\n", i, point[i].x, point[i].y);
    }
    
    return 0;
}
