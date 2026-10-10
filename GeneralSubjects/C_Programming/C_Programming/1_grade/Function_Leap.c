//
//  Leap_year.c
//  C_Programming
//
//  Created by SamoYed on 4/1/24.
//

#include <stdio.h>

char LeapCalcu(int a){
    if(a % 4 ==  0){
        if (a % 100 == 0){
            if (a % 400 == 0){
                return printf("윤년입니다. \n");
            }
            return printf("평년입니다. \n");
        }
        return printf("윤년입니다. \n");
    }
    return printf("윤년이 아닙니다.\n");
}


int main(void){
    
    int year = 0;
    
    printf("지금 년도를 입력해 주세요 : ");
    scanf("%d", &year);
    
    LeapCalcu(year);
    
}

