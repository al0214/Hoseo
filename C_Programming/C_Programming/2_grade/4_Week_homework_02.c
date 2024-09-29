//
//  4_Week_homework_02.c
//  C_Programming
//
//  Created by SamoYed on 9/29/24.
//

#include <stdio.h>

//int main(void){
//    
//    int ch;
//    
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    ch = getchar();
//    putchar(ch);
//    
//    return 0;
//    
//}



int main(void){
    
    int ch, i = 0;
    char message[100];
    
    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }
    
    message[i] = '\0';
    
    printf("%s", message);
    
    return 0;
}
