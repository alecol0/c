//编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。
//void decrement_date(int *y,int *m,int *d){/*...*/}
//void increment_date(int *y,int *m,int *d){/*...*/}
//注意计算时要考虑到闰年的问题
//  main.c
//  练习10-2
//
//  Created by edz on 2020/8/8.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void decrement_date(int *y,int *m,int *d){ //修改为前一天的日期
    if (*m==1&&*d==1){
        *y = *y - 1 ;
        *m = 12 ;
        *d = 31 ;
    }
    
    if ((*y%4==0 && *y%100==0)|| *y%400==0){ //判断是否闰年，此处是闰年
        if (*m==3&&*d==1){
            *m = 2 ;
            *d = 29 ;
        }
    }
    else
        if (*m==3&&*d==1){
            *m = 2 ;
            *d = 28 ;
        }
    if (*d == 1){
        if (*m==2||*m==5||*m==7||*m==8||*m==10||*m==12){
            *m = *m - 1 ;
            *d = 31;
        }
    }
    if (*d==1){
        if (*m==4||*m==6||*m==9||*m==11){
            *m = *m - 1;
            *d = 30 ;
        }
    }
    return ;
}

void increment_date(int *y,int *m,int *d){//修改为后一天的日期
    if (*m==12&&*d==31){
        *y = *y + 1;
        *m = 1 ;
        *d = 1 ;
    }
    if ((*y%4==0 && *y%100==0)|| *y%400==0){//判断后此处是闰年
        if (*m==2&&*d==28){
            *m = 3 ;
            *d = 1 ;
        }
    }
    else if(*m==2&&*d==29){//此处不是闰年
        *m = 3 ;
        *d = 1 ;
    }
    if (*d==31){
        if (*m==1||*m==3||*m==5||*m==7||*m==8||*m==10){
            *m = *m + 1 ;
            *d = 1 ;
        }
    }
    if (*d==30){
        if (*m==4||*m==6||*m==9||*m==11){
            *m = *m + 1 ;
            *d = 1 ;
        }
    }
    
    return ;
}


int main(int argc, const char * argv[]) {
    int year , month , day ;
    printf ("请输入:");
    scanf ("%d%d%d",&year ,&month ,&day );
    if (year<0||month<=0||month>12||day<=0||day>31)
        printf ("输入错误\n");
    decrement_date(&year, &month, &day);  //前一天
    printf("修改为前一天的日期为：%d年%d月%d日\n",year,month,day);
    increment_date(&year, &month, &day);  //后一天
    printf("修改为后一天的日期为：%d年%d月%d日\n",year,month,day);
    
    return 0;
}
