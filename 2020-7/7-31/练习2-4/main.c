//编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算
//  main.c
//  练习2-4
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a1,a2,a3,a4;
    double q1,q2,q3,q4;
    
    a1=8/5;
    a2=8.0/5;
    a3=8/5.0;
    a4=8.0/5.0;
    
    q1=8/5;
    q2=8.0/5;
    q3=8/5.0;
    q4=8.0/5.0;
    
    printf("a1=%d\n",a1);
    printf("a1=%d\n",a1);
    printf("a1=%d\n",a1);
    printf("a1=%d\n\n",a1);

    printf("q1=%f\n",q1);
    printf("q1=%f\n",q1);
    printf("q1=%f\n",q1);
    printf("q1=%f\n",q1);
    return 0;
}
