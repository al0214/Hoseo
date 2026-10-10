//
//  shoppingInventoryManagemant02.c
//  C_Programming
//
//  Created by SamoYed on 9/12/24.
//

#include <stdio.h>

int main(void){
        
    int inputItem[100], outputItem[100], TypeNumber, minNumber=0, maxNumber=0, selItem[100], maxNumberID = 0, minNumberID = 0;
    
    float totalItem=0.0, totalInputItem=0.0;
    
    printf("상풍 개수(종류)를 입력하여 주세요 : ");
    scanf("%d", &TypeNumber);
    
    printf("상품 별 입고 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
    
    for(int i = 0; i<TypeNumber; i++){
        scanf("%d", &inputItem[i]);
    
    }
    
    printf("상품 별 판매 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
    
    for(int i = 0; i<TypeNumber; i++){
        scanf("%d", &outputItem[i]);
    }
    
    
    
    for (int i = 0; i<TypeNumber; i++) {
        totalItem += outputItem[i];
        selItem[i] = inputItem[i] - outputItem[i];
        totalInputItem += inputItem[i];
        
    }
    
    printf("총 판매량 : %d (판매율%.2f%%)\n", (int)totalItem, (totalItem/totalInputItem)*100);
    
    minNumber = outputItem[0];
    maxNumber = outputItem[0];
    
    for (int i = 1; i<TypeNumber; i++) {
        if(maxNumber < outputItem[i]){
            maxNumber = outputItem[i];
            maxNumberID = i;
        }
    }
    
    printf("가장 많이 판매된 상품 : ID %d, 판매량 %d\n", maxNumberID+1, outputItem[maxNumberID]);
    
    for (int i = 1; i<TypeNumber; i++) {
        if(minNumber > outputItem[i]){
            minNumber = outputItem[i];
            minNumberID = i;
        }
    }
    
    printf("가장 적게 판매된 상품 : ID %d, 판매량 %d\n", minNumberID+1, outputItem[minNumberID]);
    
    for (int i =0; i<TypeNumber; i++){
        if(selItem[i] < 3){
            printf("상품 ID %d : 재고부족 (%d)\n", i+1, selItem[i]);
        }
    }
    
    
    return 0;
}

