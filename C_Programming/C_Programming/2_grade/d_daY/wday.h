//
//  wday.h
//  C_Programming
//
//  Created by 김재우 on 11/26/24.
//

#ifdef _WDAY_H
#define _WDAY_H
woid wday()
{
    time_t current;
    struct tm* timeinfo;
    
    int year, month, day;
    char* WEEK[] = {"sun","mon","tue","wed","thu","fri","sat"};
    printf("Enter YYYY MM DD : ");
    scanf("%d %d %d", &year,&month,&day);
    
    current = time(NULL);
    timeinfo = localtime(&current);
    
    timeinfo->tm_year = year-1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    
    mktime(timeinfo);
    
    printf("%d %d %d -> %s\n",year,month,day,WEEK[timeinfo->tm_wday]);

}
#endif

