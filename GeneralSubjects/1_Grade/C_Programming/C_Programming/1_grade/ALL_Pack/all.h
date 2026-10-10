//
//  all.h
//  C_Programming
//
//  Created by SamoYed on 5/10/24.
//

#ifndef all_h
#define all_h


void exec1(void);
void printStar(int count);
void printSpace(int count);

void exec2(void);
int power(int a, int b);

void exec3(void);
int fibonacci(int n);

void exec1(void){
    
    int line;
    scanf("%d", &line);
    for (int i=line; 0>i; i--) {
        printSpace(line-i-1);
        printStar(2*i+1);
        printf("\n");
    }
}

void printStar(int count){
    for(int i = 0; i < count; i++){
        printf("*");
    }
}
void printSpace(int count){
    for (int i=0; i<count; i++) {
        printf(" ");
    }
}



void exec2(void){
    
    printf("%d\n",power(2, 10));
}

int power(int a, int b){
    
    int c = 1;
    for (int i = 0; i<b ; i++) {
        c *= a;
    }
    return c;
}



void exec3(void){
    
    int a, b;
    scanf("%d", &a);
    b = fibonacci(a);
    printf("%d \n", b);

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



#endif /* all_h */
