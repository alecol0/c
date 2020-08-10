//不使用下标运算符，编写如下函数，返回字符串s中字符c的个数(若不存在,则为0)。
//int str_chnum(const char *s, int c){/*
//  main.c
//  练习11-5
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


int str_chnum(const char *s,int c)
{
    int num = 0;
    while (*s != '\0')
    {
        if (*s == c)
            num++;
        s++;
    }
 
    return num;

}

int main(int argc, const char * argv[]) {
    char s[128];
    char c;
    printf("输入s:");
    scanf("%s",s);
    getchar();//clear buffer
    printf("输入:");
    scanf("%c",&c);
    printf("string %s has %d character %c\n",s,str_chnum(s,c),c);
    return 0;
}
