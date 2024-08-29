//
//  total.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>
#include <unistd.h>
#include "all.h"
int selectMenu(void);

int main(void){
    
    int menu;
    while (1) {
        menu = selectMenu();
        switch (menu) {
            case 1:
                exec1();
                sleep(1);
                break;
            case 2:
                exec2();
                sleep(1);
                break;
            case 3:
                exec3();
                sleep(1);
                break;
            case -1:
                break;
                
            default:
                printf("잘못된 값 입력입니다.");
                sleep(1);
                break;
        }
        if(menu == -1) break;
    }
    
    return 0;
}

int selectMenu(void){
    
    int menu;
    printf("=====select menu=====\n");
    printf("1. exec1 function\n");
    printf("2. exec2 function\n");
    printf("3. exec3 function\n");
    printf("-1. exit\n");
    printf("input menu : ");
    
    scanf("%d", &menu);
    return menu;
}
