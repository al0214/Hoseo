//
//  mallocPrec05.c
//  C_Programming
//
//  Created by 김재우 on 11/19/24.
//
#include <stdlib.h>
#include <stdio.h>

typedef struct point{
    int x;
    int y;
} POINT;

int inputMenu(void) {
    int input;
    printf("1. 만들기, 2. 출력하기, 3. 클리어, 4. 파일저장, 5. 파일로드, -1. 종료 : ");
    scanf("%d", &input);
    return input;
}

POINT* makePoint(void) {
    POINT* p = (POINT*)malloc(sizeof(POINT));
    p->x = rand() % 100;
    p->y = rand() % 100;
    return p;
}

void printPoint(POINT* p[], int size) {
    for (int i = 0; i < size; i++) {
        printf("x:%d, y:%d\n", p[i]->x, p[i]->y);
    }
}

void freePoints(POINT* p[], int size) {
    for (int i = 0; i < size; i++) {
        free(p[i]);
    }
}

int saveFile(POINT* p[], int count) {
    FILE* fp = fopen("points.bin", "ab");
    if (fp == NULL) {
        return 0;
    }
    for (int i = 0; i < count; i++) {
        fwrite(p[i], sizeof(POINT), 1, fp);
    }
    fclose(fp);
    return 1;
}

int loadFile(POINT* p[], int max) {
    FILE* fp = fopen("points.bin", "rb");
    if (fp == NULL) {
        return 0;  // 파일을 열 수 없으면 0 반환
    }

    fseek(fp, 0, SEEK_END);
    int fSize = ftell(fp);
    int fCount = fSize / sizeof(POINT);
    rewind(fp);

    for (int i = 0; i < fCount && i < max; i++) {
        p[i] = (POINT*)malloc(sizeof(POINT));
        fread(p[i], sizeof(POINT), 1, fp);
    }

    fclose(fp);
    return fCount;  // 실제로 로드된 포인트의 수 반환
}

int main(void) {
    int menu;
    int count = 0;
    POINT* points[100];

    do {
        menu = inputMenu();
        switch (menu) {
            case 1:
                points[count] = makePoint();
                count++;
                break;
            case 2:
                printPoint(points, count);
                break;
            case 3:
                system("clear");
                break;
            case 4:
                if (!saveFile(points, count)) {
                    printf("파일 열기 실패...\n");
                } else {
                    printf("파일 저장 성공..\n");
                }
                break;
            case 5:
                count = loadFile(points, 100);
                printf("%d개의 데이터를 불러왔습니다.\n", count);
                break;
            case -1:
                freePoints(points, count);
                printf("프로그램을 종료합니다.\n");
                break;
            default:
                printf("잘못된 메뉴입니다.\n");
                break;
        }
    } while (menu != -1);

    return 0;
}
