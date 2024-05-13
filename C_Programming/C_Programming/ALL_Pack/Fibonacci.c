//
//  Fibonacci.c
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#include <stdio.h>
int fibonacci(int n);

int main(void){
    
    int a, b;
    scanf("%d", &a);
    b = fibonacci(a);
    printf("%d \n", b);
    
    return 0;
}

int fibonacci(int n){
    int f1, f2, fn = 0;
    f1 = f2 = 1;
    if(n == 1 || n == 2) return 1;
    for (int i = 3; i<=n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
