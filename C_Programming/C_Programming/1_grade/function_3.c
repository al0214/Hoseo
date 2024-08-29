//
//  function_3.c
//  C_Programming
//
//  Created by SamoYed on 4/4/24.
//

#include <stdio.h>
#define PI 3.141592

float circle(float r);
void moneyCheck(int a);
void exam1(void);
void galbi(void);
int isLeafYear(int a);

int main (void){
        
//    printf("%5.2f의 원의 넓이는 %5.2f 입니다.\n", 3.5, circle(3.5));
//    exam1();
//    galbi();
    
    int year;
    printf("input yar : ");
    scanf("%d", &year);
    
    if(isLeafYear(year))
        printf("윤년 입니다. \n");
    else
        printf("윤년이 아닙니다. \n");
    
    return 0;
}

// 이 함수는 반지름을 받아 원의 넓이를 반환한다.
float circle(float r) {
    return PI * r * r;
};

void exam1(void){
    int money = 0;
    printf("돈이 있습니까?(yes = 1, no = 2) : ");
    scanf("%d", &money);
    
    if(money == 1){
        printf("밥을 먹을 수 있다. \n");
        printf("얼마를 가지고 게신가요? : ");
        scanf("%d", &money);
        moneyCheck(money);
    } else if (money == 2) 
        printf("밤을 못 먹는다. \n");
     else 
         printf("잘못된 입력입니다. \n");
    
}

void moneyCheck(int a){
    if (a > 10000) 
        printf("돈까스를 먹을 수 있습니다. \n");
    else 
        printf("짜장면을 먹을 수 있습니다. \n");
}

void galbi(void){
    int suhak, youngeo;
    
    printf("수학이 80점, 영어가 80점이면 갈비를 먹을 수 있습니다. \n");
    
    printf("수학과 영어의 점수는 몇 입니까 : ");
    scanf("%d %d", &suhak, &youngeo);
    
    if(suhak >= 80 && youngeo >= 80)
        printf("갈비를 먹을 수 있습니다 \n");
    else 
        printf("갈비를 못 먹습니다. 공부 열심히 하세용!! \n");
}

int isLeafYear(int a){
    return ((a % 4 ==  0 && a % 100 != 0) || a % 400 ==0 )? 1 : 0;
}
