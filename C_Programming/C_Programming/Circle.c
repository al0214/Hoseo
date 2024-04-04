//
//  Value_Reset.c
//  C_Programming
//
//  Created by SamoYed on 3/21/24.
//
#include <stdio.h>


float circle_circumference(int r){ return printf("circumfernece of circle : %6.2fcm \n", 2 * 3.14 * r); }

float circle_area(int r){ return printf("area of circle : %6.2fcm^2 \n", 3.14 * r * r); }

int main(void){
    
    int i;
    float r;
    
    printf("원의 둘레를 구하실려면 1번 넓이는 2번을 둘다는 3번을 입력해 주세요 : ");
    scanf("%d", &i);
    
    printf("input radus : ");
    scanf("%f", &r);
    
    switch (i) {
        case 1:
            circle_circumference(r);
            break;
        
        case 2:
            circle_area(r);
            break;
            
        default:
            circle_area(r);
            circle_circumference(r);
            break;
    }
    
    
    return 0;
    
}
