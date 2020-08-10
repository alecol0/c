//编写如下函数，删除字符串str内的所有数字字符。
//void del_digit(char *str) { /* ... */ }
//  main.c
//  练习11-8
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void del_digit(char *d,char *s){
    
    while(*s){
        if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z')){
            *d=*s;
            *d++;
        }
        *s++;
    }
}


int main(int argc, const char * argv[]) {
    char des[128];
    char src[128];
    printf("请输入字符串：");
    scanf("%s",src);
    del_digit(des,src);
    printf("删除字符串内的所有数字字符：%s\n",des);
    return 0;
}
