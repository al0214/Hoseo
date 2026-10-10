//
//  shoppingInventoryManagemant04.c
//  C_Programming
//
//  Created by SamoYed on 9/26/24.
//

#include <stdio.h>

struct inputItem
{
    char name[100];
    int inputItem;
    int outputItem;
};

void ItemFunc(int TypeNumber, struct inputItem *inputArray, int typeNum){
    
    if(typeNum == 1){
        for(int i = 0; i<TypeNumber; i++){
            scanf("%d", &inputArray[i].inputItem);
        
        }
    } else if (typeNum == 2){
        for(int i = 0; i<TypeNumber; i++){
            scanf("%d", &inputArray[i].outputItem);
        
        }
    } else if (typeNum == 3){
        for(int i = 0; i<TypeNumber; i++){
            getchar();
            scanf("%s", inputArray[i].name);
        
        }
    }
    
}


int main(void){
        
    int TypeNumber=5, minNumber=0, maxNumber=0, selItem[100] = {0}, maxNumberID = 0, minNumberID = 0, inputManage=0, inputType=0, inputNumber=0, inputID=0, inputManageEnd= 1;
    
    float totalItem=0.0, totalInputItem=0.0;
    
    struct inputItem inputItem[100];
    
    
    while (inputManageEnd != 0) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 상품현황, 4. 상품명 입력, 5. 종료) : ");
        scanf("%d", &inputManage);
        if (inputManage==1) {
            printf("입고수량 입력 : 전체 상품 입고수량 입력 1, 개별 상품 입력 2 : ");
            scanf("%d", &inputType);
            if (inputType==1) {
                printf("상품 별 입고 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
                ItemFunc(5, inputItem, 1);
            } else if (inputType==2){
                printf("상품ID : ");
                scanf("%d", &inputID);
                printf(" 입고수량 : ");
                scanf("%d", &inputNumber);
                inputItem[inputID-1].inputItem = inputNumber;
            }
            
        } else if (inputManage == 2){
                printf("입고수량 입력 : 전체 상품 판매수량 입력 1, 개별 상품 입력 2 : ");
                scanf("%d", &inputType);
                if (inputType==1) {
                    printf("상품 별 판매 수량을 입력하여 주세요(입력 예시 5 5 5 5 5) : ");
                    ItemFunc(5, inputItem, 2);
                } else if (inputType==2){
                    printf("상품ID : ");
                    scanf("%d", &inputID);
                    printf("판매 수량 : ");
                    scanf("%d", &inputNumber);
                    inputItem[inputID-1].outputItem = inputNumber;
                }
        }
        else if (inputManage== 3){
            for (int i = 0; i<TypeNumber; i++) {
                totalItem += inputItem[i].outputItem;
                selItem[i] = inputItem[i].inputItem - inputItem[i].outputItem;
                totalInputItem += inputItem[i].inputItem;
                
            }
            
            printf("재고 수량 : ");
            for(int i = 0; i<5; i++){
                printf("%d ", selItem[i]);
            }
            printf("\n");
            
            printf("총 판매량 : %d (판매율%.2f%%)\n", (int)totalItem, (totalItem/totalInputItem)*100);
            
            minNumber = inputItem[0].outputItem;
            maxNumber = inputItem[0].outputItem;
            
            for (int i = 1; i<TypeNumber; i++) {
                if(maxNumber < inputItem[i].outputItem){
                    maxNumber = inputItem[i].outputItem;
                    maxNumberID = i;
                }
            }
            
            printf("가장 많이 판매된 상품 : ID %d, 상품명 %s, 판매량 %d\n", maxNumberID+1, inputItem[maxNumberID].name ,inputItem[maxNumberID].outputItem);
            
            for (int i = 1; i<TypeNumber; i++) {
                if(minNumber > inputItem[i].outputItem){
                    minNumber = inputItem[i].outputItem;
                    minNumberID = i;
                }
            }
            
            printf("가장 적게 판매된 상품 : ID %d, 상품명 %s, 판매량 %d\n", minNumberID+1, inputItem[minNumber].name, inputItem[minNumber].outputItem);
            
            for (int i =0; i<TypeNumber; i++){
                if(selItem[i] < 3){
                    printf("상품 ID %d, 상품명 %s : 재고부족 (%d)\n", i+1, inputItem[i].name, selItem[i]);
                }
            }
        } else if (inputManage == 4){
            ItemFunc(5, inputItem, 3);
        } else if(inputManage== 5){
            inputManageEnd = 0;
        }
            else{
            printf("잘못된 입력입니다.");
        }
        
    }
    return 0;
}


