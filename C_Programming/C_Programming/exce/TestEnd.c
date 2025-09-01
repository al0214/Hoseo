//
//  TestEnd.c
//  C_Programming
//
//  Created by 김재우 on 12/5/24.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
}POINT;

int main(void)
{
    POINT* points;
    int count;
    scanf("%d", &count);
    
    points = malloc(sizeof(POINT));
    
    for(int i = 0; i<count; i++){
        points[i] . x = rand() % 100;
        points[i] . y = rand() % 100;
    }
    for (int i = 0; i<count; i++) {
        printf("%d %d", points[i] . x, points[i] . y);
    }
    
    free(points);
    
    return 0;
}
