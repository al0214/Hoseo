//
//  shoppingInventoryManagemant06.c
//  C_Programming
//
//  Created by SamoYed on 11/7/24.
//

#include <stdio.h>
#define MAXITEM 5

struct inputItem
{
    int id;
    char name[100];
    int sellMoney;
    int sellItem;
    int inputItem;
    int outputItem;
    int totalOutput;
};

void InputItem(struct inputItem *inputArray){
    int id = 0;
    
    printf("ID : ");
    scanf("%d", &id);
    inputArray[id-1].id = id;
    id = id-1;
    
    printf("상품명 : ");
    getchar();
    scanf("%s", inputArray[id].name);
    
    printf("입고량 : ");
    scanf("%d", &inputArray[id].inputItem);
    
    printf("판매 가격 : ");
    scanf("%d", &inputArray[id].sellMoney);
}

void InputItemFunc(struct inputItem *inputArray){
    
    int count = 0;
    for(int i = 0; i<5; i++){
        if(inputArray[i].id != 0){
            count++;
        }
    }
    
    if(count>5){
        printf("추가할 수 있는 상품의 갯수를 초과했습니다.");
        printf("수정할 상품의 ID를 입력하여 주세요 : ");
        InputItem(inputArray);
    } else{
        InputItem(inputArray);
    }
}

void OutputItemFunc(struct inputItem *inputArry, int id){
    
    if(inputArry[id-1].id != 0){
        printf("판매량");
        scanf("%d", &inputArry[id-1].outputItem);
    } else{
        printf("없는 상품 입니다. \n");
    }
}

void OneItemFunc(struct inputItem *inputArray, int id){
    if(inputArray[id-1].id != 0){
        printf("상품명 : %s\n입고량 : %d\n판매 가격 : %d\n판매량 : %d\n",
               inputArray[id-1].name, inputArray[id-1].inputItem,
               inputArray[id-1].sellMoney, inputArray[id-1].outputItem);
    } else{
        printf("잘못된 상품 ID 입력 입니다.");
    }
}

void ItemSellTotal(struct inputItem *inputArray){
    int totalItem=0, totalInputItem = 0;
    for(int i = 0; i<5; i++){
        for (int i = 0; i<5; i++) {
            totalItem += inputArray[i].outputItem;
            inputArray[i].sellItem = inputArray[i].inputItem - inputArray[i].outputItem;
            totalInputItem += inputArray[i].inputItem;
            
        }
        printf("총 판매량 : %d (판매율%.2d%%)\n", (int)totalItem, (totalItem/totalInputItem)*100);
        
        int minNumber = inputArray[0].outputItem, maxNumber = inputArray[0].outputItem, maxNumberID=0, minNumberID = 0;
        
        for (int i = 1; i<5; i++) {
            if(maxNumber < inputArray[i].outputItem){
                maxNumber = inputArray[i].outputItem;
                maxNumberID = i;
            }
        }
        
        printf("가장 많이 판매된 상품 : ID %d, 상품명 %s, 판매량 %d\n", maxNumberID+1, inputArray[maxNumberID].name ,inputArray[maxNumberID].outputItem);
        
        for (int i = 1; i<5; i++) {
            if(minNumber > inputArray[i].outputItem){
                minNumber = inputArray[i].outputItem;
                minNumberID = i;
            }
        }
        
        printf("가장 적게 판매된 상품 : ID %d, 상품명 %s, 판매량 %d\n", minNumberID+1, inputArray[minNumber].name, inputArray[minNumber].outputItem);
        
        for (int i =0; i<5; i++){
            if(inputArray[i].sellItem < 3){
                printf("상품 ID %d, 상품명 %s : 재고부족 (%d)\n", i+1, inputArray[i].name, inputArray[i].sellItem);
            }
        }
    }
}

void fileSaveFunc(struct inputItem *totallArray){
    
   
    
    FILE *file = fopen("./saveManage.txt", "w");
    
    if(file != NULL){

        for(int i = 0; i<5; i++){
            if(totallArray[i].id != 0){
                fprintf(file, "ID : %d\n", totallArray[i].id);
                fprintf(file, "  이름 : %s\n  입고량 : %d\n  판매가격 : %d\n ", totallArray[i].name, totallArray[i].inputItem, totallArray[i].sellMoney);
            }
        }
        fclose(file);
    }
    
}

struct inputItem createDefaultItem(void) {
    struct inputItem item;
    item.id = 0;
    return item;
}

int main(void){
    
    int TypeNumber=5, minNumber=0, maxNumber=0, selItem[100] = {0}, maxNumberID = 0, minNumberID = 0, inputManage=0, inputManageEnd= 1;
    
    float totalItem=0.0, totalInputItem=0.0;
    
    struct inputItem inputItem[100];
    
    for(int i = 0; i<5; i++){
        inputItem[i] = createDefaultItem();
    }
    
    
    while (inputManageEnd != 0) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체 현황, 5. 종료) : ");
        scanf("%d", &inputManage);
        
        int id = 0;
        
        if (inputManage==1) {
            InputItemFunc(inputItem);
        }
        if((inputManage == 3) || (inputManage == 2)){
                printf("상품 ID : ");
                scanf("%d", &id);
                if (inputManage == 2){
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
                ItemSellTotal(inputItem);
            } else if(inputManage== 5){
                fileSaveFunc(inputItem);
                inputManageEnd = 0;
            }
            
        }
        return 0;
    }
    

