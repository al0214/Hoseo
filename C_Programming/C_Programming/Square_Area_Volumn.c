//
//  Square.c
//  C_Programming
//
//  Created by SamoYed on 3/21/24.
//

#include <stdio.h>

#include <stdio.h>

int square_area(int a, int b) { return a * b; }

int square_volume(int a, int b, int c) { return a * b * c; }

int main(void) {
    int a, b, c, i;
    printf("정사각형의 넓이와 부피를 구하는 계산기 입니다.\n정사각형의 넓이는 1, 부피는 2를 입력해 주세요 : ");
    scanf("%d", &i);

    switch (i) {
        case 1:
            printf("정사각형의 가로 세로를 입력해 주세요 : ");
            scanf("%d %d", &a, &b);
            printf("정사각형의 넓이는 %dcm^2 입니다.\n", square_area(a, b));
            break;

        case 2:
            printf("정사각형의 가로 세로 높이를 입력해 주세요 : ");
            scanf("%d %d %d", &a, &b, &c);
            printf("정사각형의 부피는 %dcm^3 입니다.\n", square_volume(a, b, c));
            break;

        default:
            break;
    }
    return 0;
}
