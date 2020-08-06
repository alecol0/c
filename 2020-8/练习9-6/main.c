//练习 9-6
//编写如下函数，返回字符串s中字符c的个数(没有则返回0)。
//int str_chnum(const char s[],int c){/*...*/}
//  main.c
//  练习9-6

#include <stdio.h>

int str_chnum(const char s[],int c){
    int len= 0 ;
    
    while (c){
        len++;
    return len;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    char s ;
    scanf ("%s",&s);
    printf("字符串中c的个数是%d\n",s);
    return 0;
}
