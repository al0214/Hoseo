//
//  fileBasic06.c
//  C_Programming
//
//  Created by SamoYed on 11/10/24.
//

#include <stdio.h>
#include <string.h>
#define SIZE 100

//int main(void){
//    
//    char input[SIZE];
//    FILE* fp = NULL;
//    
//    if((fp=fopen("output.bin", "wb")) == NULL){
//        printf("error...");
//        return 0;
//    }
//    
//    gets(input);
//    //fputs(input, fp);
//    
//    fwrite(input, strlen(input), 1, fp);
//    
//    fclose(fp);
//    
//    return 0;
//}

int main(void){

    char input[SIZE];
    FILE* fp = NULL;
    int i = 0;

    if((fp=fopen("output.bin", "wb")) == NULL){
        printf("error...");
        return 0;
    }

    while (!feof(fp)) {
        fread(&input[i], sizeof(char), 1, fp);
        i++;
    }
    input[--i] = '\0';
    puts(input);


    fwrite(input, strlen(input), 1, fp);

    fclose(fp);

    return 0;
}
