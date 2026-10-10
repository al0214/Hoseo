//
//  mallocPrec04.c
//  C_Programming
//
//  Created by 김재우 on 11/19/24.
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
POINT* makePoint(void){
    POINT* p = (POINT*)malloc(sizeof(POINT));
    p->x = rand()%100;
    p->y = rand()%100;
    return p;
}
void printPoint(POINT* p[],int size){
    for(int i = 0;i<size;i++)
        printf("x:%d, y:%d\n", p[i]->x, p[i]->y);
}
void freePoints(POINT* p[],int size){
    for(int i = 0;i<size;i++)
        free(p[i]);
}

int main(void)
{
    int menu;
    int count=0;
    POINT* points[100];
    
    do{
        menu = inputMenu();
        if(menu == 1){
            //구조체 만들기
            points[count] = makePoint();
            points[count] = (POINT*)malloc(sizeof(POINT));
            points[count]->x = rand()%100;
            points[count]->y = rand()%100;
            count++;
            printf("잘 만들었습니다.\n");
        }
        else if(menu ==2){
            //구조체 출력
            printPoint(points,count);
        }
        else if(menu == -1){
            freePoints(points,count);
            printf("프로그램을 종료합니다.\n");
        }
    }while(menu > 0);
    return 0;
}
