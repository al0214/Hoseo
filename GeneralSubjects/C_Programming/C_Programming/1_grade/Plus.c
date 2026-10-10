//
//  Plus.c
//  C_Programming
//
//  Created by SamoYed on 4/18/24.
//

#include <stdio.h>

void plus_end(void);
void plus_plus(void);
void plus_plus_2(void);
void do_while(void);

int main(void){
    int a = 0;
    
    printf("1번 예제 1 (1 더하기) \n2번 예제 2 (Do_while문)\n3번 예제 3 (숫자 계속 더하기)\n4번 예제 4 (1~x까지의 합) \n값을 입력해주세요 : ");
    scanf("%d", &a);
    
    switch (a) {
        case 1:
            plus_plus_2();
            break;
        case 2:
            do_while();
            break;
        case 3:
            plus_plus();
            break;
        case 4:
            plus_end();
            break;
            
        default:
            printf("잘못된 값을 입력하셨습니다");
            break;
    }
    
    return 0;
}

void plus_end(void){
    int sum = 0, count = 0, a = 0;
    printf("더할 값을 입력해 주세요 : ");
    scanf("%d", &a);
    
        while (count <= a) {
            sum += count;
            count++;
        }
        printf("1 ~ %d까지 합은 : %d\n", a, sum);
}

void plus_plus(void){
    int count = 1, input=0, sum=0;
    while(count==1){
        printf("더할 숫자를 입력해 주세요 : ");
        scanf("%d", &input);
        sum += input;
        
        printf("계속 더하실 건가요 : ");
        scanf("%d", &count);
    }
    printf("sum : %d\n", sum);
}

void plus_plus_2(void){
    int input = 0, sum = 0;
    
    while (input > -1) {
        
        printf("input 값을 입력해 주세요 : ");
        scanf("%d", &input);
        
        if (input <= -1) {
            sum -= input;
            break;
        } else{
            sum += input;
        }
        
    }
    printf("sum : %d\n", sum);
}

void do_while(void){
    int menu = 0;
    do{
        printf("값을 입력 : ");
        scanf("%d", &menu);
        if (menu != 1 && menu != 2) printf("1, 2종 입력\n");
    } while(menu != 1 && menu != 2);
}

//void plus_plus_2(void){
//    int input = 0, sum = 0;
//    
//    while (1) {  // 무한 루프
//        printf("input 값을 입력해 주세요 : ");
//        scanf("%d", &input);
//        
//        if (input < 0) {  // 음수 입력 시 즉시 반복문 종료
//            break;
//        }
//        
//        sum += input;
//    }
//    printf("sum : %d\n", sum);
//}


