//
//  shoppingInventoryManagemant05.c
//  C_Programming
//
//  Created by SamoYed on 10/10/24.
//

#include <stdio.h>
#define MAXITEM 5

struct inputItem
{
    int id;
    char name[100];
    int sellMoney;
    int inputItem;
    int outputItem;
    int totalOutput;
};

void InputItemFunc(struct inputItem *inputArray, int id){
    
    int count = 0;
    for(int i = 0; i<100; i++){
        if(inputArray[i].id != 0){
            count++;
        }
    }
    
    if(count>5){
        printf("추가할 수 있는 상품의 갯수를 초과했습니다.");
    } else{
        
        inputArray[id-1].id = id;
        
        printf("상품명 : ");
        getchar();
        scanf("%s", inputArray[id].name);
        
        printf("입고량 : ");
        scanf("%d", &inputArray[id].inputItem);
        
        printf("판매 가격 : ");
        scanf("%d", &inputArray[id].sellMoney);
    }
}

void OutputItemFunc(struct inputItem *inputArry, int id){
    
    if(inputArry[id-1].id != 0){
        printf("판매량");
        scanf("%d", &inputArry[id-1].outputItem);
    } else{
        printf("없는 상품 입니다.");
    }
}

void OneItemFunc(struct inputItem *inputArray, int id){
    
    if(inputArray[id-1].id != 0){
        printf("상품명 : %s\n입고량 : %d\n판매 가격 : %d\n판매량 : %d",
               inputArray[id-1].name, inputArray[id-1].inputItem,
               inputArray[id-1].sellMoney, inputArray[id-1].outputItem);
    } else{
        printf("잘못된 상품 ID 입력 입니다.");
    }
    
}


int main(void){
        
    int TypeNumber=5, minNumber=0, maxNumber=0, selItem[100] = {0}, maxNumberID = 0, minNumberID = 0, inputManage=0, inputType=0, inputNumber=0, inputID=0, inputManageEnd= 1;
    
    float totalItem=0.0, totalInputItem=0.0;
    
    struct inputItem inputItem[100];
    
    
    while (inputManageEnd != 0) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체 현황, 5. 종료) : ");
        scanf("%d", &inputManage);
        
        int count = 0, id = 0;
        for(int i = 0; i<100; i++){
            if(inputItem[i].id != 0){
                count++;
            }
        }
        
        if(inputManage <= 3){
            printf("상품 ID : ");
            scanf("%d", &id);
            
            if (inputManage==1) {
                InputItemFunc(inputItem, id);
            } else if (inputManage == 2){
                    OutputItemFunc(inputItem, id);
                }
            else if (inputManage == 3){
                OneItemFunc(inputItem, id);
            }
        }
        else if (inputManage== 4){
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
            ItemFunc(inputItem, id);
        } else if(inputManage== 5){
            inputManageEnd = 0;
        }
            else{
            printf("잘못된 입력입니다.");
        }
        
    }
    return 0;
}


