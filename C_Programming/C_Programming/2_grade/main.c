#include <stdio.h>
#include <string.h>
#include <math.h>
#define WORD 16

void getBinary(char bin[], char str[], int n){
    for (int i = 0; i < n; i++) {
        bin[i] = '0';
    }
    bin[n] = '\0';
    
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '1') {
            bin[n - len + i] = '1';
        }
    }
}

void complement2(char bin[], int n){
    for (int i = 0; i < n; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (bin[i] == '0') {
            bin[i] = '1';
            break;
        } else {
            bin[i] = '0';
        }
    }
}

int bin2dec(char bin[], int n){
    int dec = 0;
    int power = 1;
    
    for (int i = n - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            dec += power;
        }
        power *= 2;
    }
    
    return dec;
}

int main(void){
    char input1[100];
    char input2[100];
    char op[100];
    
    char binary1[WORD + 1] = {0};
    char binary2[WORD + 1] = {0};
    
    int result;
    int num1, num2;
    
    printf("<<<<<input>>>>>>\n");
    gets(input1);
    gets(op);
    gets(input2);
    
    getBinary(binary1, input1, WORD);
    getBinary(binary2, input2, WORD);
    
    num1 = bin2dec(binary1, WORD);
    num2 = bin2dec(binary2, WORD);
    
    switch(op[0]){
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        case '%': result = num1 % num2; break;
        default : printf("bad operator.....\n"); return 1;
    }   
    
    printf("%s(%d) %c %s(%d) = %d\n", binary1, num1, op[0], binary2, num2, result);
    return 0;
}
