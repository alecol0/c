// 不使用下标运算符，实现代码清单9-11的str_toupper函数和str_totower函数。
//  main.c
//  练习11-7
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


void str_toupper(char *s)
{
    while(*s!='\0')
    {
        *s = toupper(*s);
        s++;
    }
    return;
}

void str_tolower(char *s)
{
    while(*s!='\0')
    {
        *s = tolower(*s);
        s++;
    }
    return;
}
int main(int argc, const char * argv[]) {
        int i;
        char s[128];
        printf("输入s:");
        scanf("%s",s);
     
        printf("输出:");
        str_toupper(s);
        printf("%s",s);
        printf("\n");
     
        printf("输出:");
        str_tolower(s);
        printf("%s",s);
        printf("\n");
     
        return 0;
    }
