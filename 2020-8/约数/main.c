//编写一段程序，输入两个整数值，如果后者是前者的约数，则显示“B是A的约数”，如果不是，则显示“B不是A的约数”。
//  main.c
//  约数
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b ;
    scanf ("%d%d",&a,&b);
    if (a%b)
        puts("B不是A的约d数\n");
    else
        puts("B是A的约数\n");
    return 0;
}
