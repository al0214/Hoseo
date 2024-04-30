//
//  if_else_practice.c
//  C_Programming
//
//  Created by SamoYed on 4/8/24.
//

#include <stdio.h>
#include <unistd.h>

char live(int a);
char gender(int a);
char years(int a);
void prin (void);

int main(void){
    int d = 0;
    
    while (1) {
        printf("\n시작 : 1 멈춤 2 \n입력칸 : ");
        scanf("%d", &d);
        switch (d) {
            case 1:
                prin();
                sleep(1);
                break;
            case 2:
                printf("프로그램이 종료됩니다.\n");
                return 0;
            default:
                printf("잘못 된 입력입니다.");
                break;
        }
    }
}

char live(int a){
    
    switch (a) {
        case 1:
            return printf("서울거주 ");
            break;
        case 2:
            return printf("경기거주 ");
            break;
        case 3:
            return printf("충남거주 ");
            break;
            
        default:
            return printf("잘못된 주소입니다.");
            break;
    }
}

char gender(int a){
    return (a==1)? printf("남자 "):printf("여자 ");
}

char years(int a){
    if(a < 10){
        return printf("10대 미만 ");
    } else if (10 <= a && a < 20){
        return printf("10대 ");
    } else if (20 <= a && a< 30){
        return printf("20대 ");
    } else{
        return printf("30대 ");
    }
}

void prin(void){
    int a = 0, b = 0, c = 0;
    printf("거주지 - 서울 : 1, 경기 : 2, 충남 : 3 \n성별 - 남자 : 1, 여자 : 2\n나이는 숫자로 입력 \n입력 칸 : ");
    scanf("%d %d %d", &a,&b,&c);
    
    live(a);
    years(c);
    gender(b);
    
}
