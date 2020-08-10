//不使用下标运算符，编写如下函数，显示字符串s。
//void put_string(const char *s) { /* ... */ }
//  main.c
//  练习11-4
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void put_string(const char *s)
{
    int str_len;
    int i;
    str_len = strlen(s);
    for (i = 0; i < str_len; i++)
    {
        printf("%c",*s);
        s++;
    }
    return;
}

int main(int argc, const char * argv[]) {
    
    {
        char s[] = "abcdef";
        put_string(s);
        printf("\n");
     
        return 0;
    }
}
