//
//  fileBasic03.c
//  C_Programming
//
//  Created by SamoYed on 11/3/24.
//

#include <stdio.h>

int mygetline(char* line){
    
    int ch;
    int i = 0;
    while ((ch=getchar()) != '\n') line[i++] = ch;
    line[i] = '\0';
    return i;
    
}

int main(void){
    
    char input[100];
    FILE* fp;
    
    if((fp = fopen("output.txt", "w")) == NULL){
        printf("error...");
        return 0;
    }
    
    for(int i=0; i<5; i++){
        mygetline(input);
        fputs(input, fp);
        fputs("\n", fp);
    }
    
    fclose(fp);
    
    return 0;
}
