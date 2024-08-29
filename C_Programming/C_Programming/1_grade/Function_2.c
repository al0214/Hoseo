//
//  Function_2.c
//  C_Programming
//
//  Created by SamoYed on 4/2/24.
//

#include <stdio.h>

float circum(float r);
float circle_area(float r);
float inch_to_cm(float r);
float cm_to_inch(float r);
float pyung_to_jegop_meter(float r);
float jegop_meter_to_pyung(float r);

int main(void){
//    float r = 0.0;
//
//    printf("실수를 입력해주세요 : ");
//    scanf("%f", &r);

//    printf("반지름 5.6인 원의 둘레는 %f , 원의 넓이는 %f \n", circum(5.6) ,circle_area(5.6));
//    printf("5.4inch -> %fcm \n", inch_to_cm(5.4));
//    printf("4평의 제곱미터는 %f입니다. \n", pyung_to_jegop_meter(4));
    printf("13.223200제곱미터의 평은 %f입니다. \n", jegop_meter_to_pyung(13.223200));
}

float circum(float r){
    return  3.14 * 2 * r;;
}

float circle_area(float r){
    return 3.14 * r * r;
}

float inch_to_cm(float r){
    return 2.54 * r;
}

// cm을 inch로 변환해주는 함수 만들기
float cm_to_inch(float r){
    return  r / 2.54;
}

// 평을 제곱 미터로
float pyung_to_jegop_meter(float r){
    return r * 3.3058;
}

// 제곱 미터를 평으로 변환
float jegop_meter_to_pyung(float r){
    return r / 3.3058;
}
