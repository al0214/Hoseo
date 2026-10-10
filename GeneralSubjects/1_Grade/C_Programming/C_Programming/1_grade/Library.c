//
//  Library.c
//  C_Programming
//
//  Created by SamoYed on 5/13/24.
//

#include <stdio.h>
#include <math.h>

int main(void){
    
    int result=1, n, r, num;
    
    scanf("%d %d", &n, &r);
    
    result = pow(n, r);
    
    printf("%d의 %d승은 %d 입니다.\n",n, r,result );
    
    scanf("%d", &num);
    
    
    printf("루트%d는 %lf 입니다", num, sqrt(num));
    
    return 0;
}
