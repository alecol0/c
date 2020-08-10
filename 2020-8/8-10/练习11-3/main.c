// 改写代码清单11-6的程序，将本文中学习的str_copy函数的调用作为printf函数的实参。
//  main.c
//  练习11-3
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++);
    return t;
}

int main(int argc, const char * argv[]) {
    char str[128] = "ABC";
    char tmp[128];
    printf("str = \"%s\"\n", str);
    printf("复制的是：");
    scanf("%s", tmp);
    puts("复制了:");
    printf("str = \"%s\"\n", str_copy(str, tmp));
    return 0;
}
