//
//  fileBasic02.c
//  C_Programming
//
//  Created by SamoYed on 11/3/24.
//

#include <stdio.h>

int main(void){
    
    int x, y, ch;
    char buffer[100];
    
    fscanf(stdin, "%d %d", &x, &y);
    fprintf(stdout, "%d, %d\n", x, y);
    
    while ((ch = getchar()) != '\n');
    fgets(buffer, 100, stdin);
    fputs(buffer, stdout);
    
    return 0;
}
