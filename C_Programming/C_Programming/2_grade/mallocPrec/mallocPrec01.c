//
//  mallocPrec01.c
//  C_Programming
//
//  Created by 김재우 on 11/18/24.
//

#include <stdio.h>
#include <stdlib.h>
//int size;
//
//int array[size];
//scanf("%d", &size);
//array[0] = 4; // MS VS 사용 불가

int add(int a, int b){
    return a+b;
}

int main(void){
    int i, j ,k;
    
    i = 10;
    j = 20;
    k = add(10, 20);
    return 0;
}

void* malloc(size_t size); // 바이트 단위 size만큼 메모리 할당 ( 반환 : 할당 메모리 시작 주소)
void free(void* ptr); // 할당받은 메모리 해제
