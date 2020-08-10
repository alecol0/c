//编写一段程序，像下面那样显示出读取的实数的值
//请输入一个实数:57.3
//你输入的是57.300000
//  main.c
//  练习2-3
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i ;
    scanf ("%d" , &i);
    float a = i ;
    printf("%f\n",a);
    return 0;
}
