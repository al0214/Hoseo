//
//  strPrecticeTotal.c
//  C_Programming
//
//  Created by SamoYed on 10/4/24.
//

#include <stdio.h>
#include <string.h>

int main(void){
    
    char input[200] = "";
    int count[26] = {0};
    int ch;
    int i = 0;
    
    while ((ch = getchar()) != EOF) {
        input[i++] = ch;
    }
    i = 0;
    while (input[i] != '\0') {
        if(input[i] >= 'a' && input[i] <= 'z'){
            count[input[i] - 'a']++;
        }
        i++;
    }
    
    printf("입력 문자열 : %s\n", input);
    for(int i=0; i<26; i++) printf("%c 출현 횟수 : %d\n", 'a'+i, count[i]);
    
    return 0;
}
