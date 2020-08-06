//编写如下函数，实现字符串的逆向输出。
//void put_stringr(const char s[]){/*...*/}
//例如，将"SEC" 显示为"CES"。
//  main.c
//  练习9-8

#include<stdio.h>

void put_stringr(const char s[]) {
    int g = strlen(s);
    int i;
    int len;
    scanf ("%d",&len);
    char m[len];
    for (i = 0; i < g; i++) {
        m[i] = s[g -i- 1];
        putchar(m[i]);
    }
    
}
int main(int argc, const char * argv[]) {
    int len;
    scanf ("%d",&len);
    char x[len];
    printf("请输入字符串:");
    scanf("%s", x);
    printf("%s", x);
    putchar('\n');
    put_stringr(x);
    
    
}
