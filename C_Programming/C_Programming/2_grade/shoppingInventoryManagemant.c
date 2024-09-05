//
//  shoppingInventoryManagemant.c
//  C_Programming
//
//  Created by SamoYed on 9/5/24.
//

#include <stdio.h>

int main(void){
        
    int inputItem[100], outputItem[100], TypeNumber, inputID;
    
    printf("상풍 개수(종류)를 입력하여 주세요 : ");
    scanf("%d", &TypeNumber);
    
    printf("상품 별 입고 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
    
    for(int i = 0; i<TypeNumber-1; i++){
        scanf("%d", &inputItem[i]);
    }
    
    printf("상품 별 판매 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
    
    for(int i = 0; i<TypeNumber-1; i++){
        scanf("%d", &outputItem[i]);
    }
    
    for (int i = 0; i<5; i++){
        printf(<#const char *restrict, ...#>)
    }
        
    printf("ID를 입력하여 주세요 : ");
    scanf("%d", &inputID);
    
    printf("\n입력한 ID에 해당하는 제품의 재고 수량 => %d\n", inputItem[inputID-1]);
    
    for(int i = 0; i<TypeNumber; i++){
        inputItem[i] = inputItem[i] - outputItem[i];
    }
    
    printf("모든 상품의 재고 수량은 : ");
    for (int i = 0; i<TypeNumber-1; i++) {
        printf("%d ", inputItem[i]);
        if(i==TypeNumber-1) printf("\n");
    }
    
   

    
    return 0;
}
