#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t currenttime = time(NULL);
    srand((unsigned int)currenttime);
    
    int max = 0, min = 0, c=0, count=0;
    int total[100];
    
    for(int i=0; i<100; i++){
        total[i] = (rand() % 100) + 1;
        printf("%d ",total[i]);
    }
    
    printf("\n");
    count = sizeof(total) / sizeof(int);
    
    printf("count = %d\n", count);
    
    for(int i=0; i<count; i++){
        c += total[i];
    }
    
    printf("total = %d\n", c);
    
    float avg;
    
    avg = c/count;
    printf("avg = %lf ", avg);
    
    max = total[0];
    min = total[0];
    
    for(int i=0; i<count; i++){
        if(max < total[i]){
            max = total[i];
        }
    }
    printf("max = %d ", max);
    
    for(int i=0; i<count; i++){
        if(total[i] < min){
            min = total[i];
        }
    }
    
    printf("min = %d", min);
    
    return 0;
}
