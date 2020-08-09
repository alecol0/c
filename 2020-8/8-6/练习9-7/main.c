//编写如下函数，使字符串s显示n次。
//void put_stringn(const char s[],int n){/*...*/}
//例如，若s和分别为"ABC"和3,则显示"ABCABCABC"。
//  main.c
//  练习9-7

#include <stdio.h>

void put_stringn(const char s[],int n){
    int i = 0 , j = 0 ;
    for ( ; j < n ; j++){
        while (s[i]){
            putchar(s[i++]);
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int x , n ;
    scanf ("%d",&x);
    char a[x];
    scanf ("%d",&n);
    printf("显示次数：",n);
    
    put_stringn(x, n);
}
