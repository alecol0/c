//不使用下标运算符，编写如下函数，若字符串S中含有字符C(若含有多个，以先出现的为准)，则返回指向该字符的指针，否则返回空指针。
//char *strchr(const char *s, int c) { /* ... */ }
//  main.c
//  练习11-6
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

#include<string.h>

char *str_chr(const char *s,int c)
{
    int *chr_flag;
    while (*s != '\0')
    {
        if (*s == c)
        {
            chr_flag = s;
            break;
        }
        else
            chr_flag = NULL;
        s++;
    }
    return chr_flag;
   }
int main(int argc, const char * argv[]) {
    char s[128];
    char c;
    printf("输入:");
    scanf("%s",s);
    getchar();
    printf("输入:");
    scanf("%c",&c);
    printf("%s has %d %c\n",s,*strchr(s,c),c);
    

    return 0;
}
