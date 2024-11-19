//
//  mallocPrec03.c
//  C_Programming
//
//  Created by 김재우 on 11/18/24.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct point{
    int x;
    int y;
}POINT;

int inputMenu(void){
    int input;
    printf("메뉴입력(1.구조체 만들기, 2.구조체 출력하기, -1.종료 : ");
    scanf("%d", &input);
    return input;
}

int main(void)
{
    int menu;
    
    do{
        menu = inputMenu();
        if(menu == 1){
            //구조체 만들기
        }
        else if(menu ==2){
            //구조체 출력
        }
        else if(menu == -1){
            printf("프로그램을 종료합니다.\n");
        }
    }while(menu > 0);
    
    return 0;
}
/*
POINT* point;
    int count;
    scanf("%d", &count);
    
    points = (POINT*)malloc(sizeof(POINT) * count);
    
    for(int i = 0; i< count;i++){
        points[i].x = rand() % 100;
        points[i].y = rand() % 100;
    }
    for(int i = 0;i<count;i++){
        printf("x - %d, y - %d\n", points[i].x, points[i].y);
    }
    free(points);
*/
