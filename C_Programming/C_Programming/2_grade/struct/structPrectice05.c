//
//  structPrectice05.c
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
    
    struct point p1 = {10, 10};
    POINT p2 = {20, 20};
    POINT* p3 = &p2;
    
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);
    printf("p3 -> x = %d, p3 -> y = %d\n", p3 -> x, p3 -> y);
    
    p3 = &p1;
    
    printf("p3 -> x = %d, p3 -> y = %d\n", (*p3).x, (*p3).y);
    
    return 0;
}


//typedef struct point{
//    int x;
//    int y;
//} POINT;
//
//int main(void){
//        
//    POINT point[SIZE] = {0};
//    POINT temp = {0, 0};
//    int least;
//    
//    srand((unsigned)time(NULL));
//    
//    for(int i = 0; i<SIZE; i++){
//        point[i].x = rand() % 101;
//        point[i].y = rand() % 101;
//    }
//    
//    for(int i = 0; i<SIZE; i++){
//        printf("point[%3d] : (%3d, %3d)\n", i, point[i].x, point[i].y);
//    }
//    
//    for(int i = 0; i<SIZE-1; i++){
//        least = i;
//        for(int j = i+1; j<SIZE; j++){
//            if(point[least].x > point[j].x) least = j;
//            else if (point[least].x == point[j].x && point[least].y > point[j].y) least = j;
//        }
//        temp = point[least];
//        point[least] = point[i];
//        point[i] = temp;
//    }
//    
//    printf("after sorting >>>>>>>>>>>>>>>>>>>\n");
//    for(int i=0; i<SIZE; i++){
//        printf("point[%3d] : (%3d, %3d)\n", i, point[i].x, point[i].y);
//    }
//    
//    return 0;
//}
