//编写如下函数，实现字符串的逆向输出。
//void put_stringr(const char s[]){/*...*/}
//例如，将"SEC" 显示为"CES"。
//  main.c
//  练习9-8

#include<stdio.h>
#include <string.h>

void put_stringr(const char s[]) {
    int str_len = 0 ; //内部结构长度
    while(s[str_len] != '0'){ //如果字符串没有终止，则继续
        str_len++;
    }
    while (s[str_len] >= 0){
        putchar(s[str_len]);
        str_len--;
    }
    return ;
}
int main(int argc, const char * argv[]) {
    
    char x[10];
    printf("请输入字符串:");
    scanf("%s", x);
    printf("%s\n", x);
    put_stringr(x);
    putchar('\n');
    
}
