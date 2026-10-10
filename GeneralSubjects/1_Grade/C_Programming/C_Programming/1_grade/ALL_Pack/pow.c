//
//  pow.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>

int power(int a, int b);

int main(void){
    
    printf("%d\n",power(2, 10));
    
    return 0;
}

int power(int a, int b){
    
    int c = 1;
    for (int i = 0; i<b ; i++) {
        c *= a;
    }
    return c;
}
