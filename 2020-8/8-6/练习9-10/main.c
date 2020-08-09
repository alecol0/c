//编写如下函数，将字符串s中的数字字符全部删除。
//void del_digit(char s[]){/*...*/}
//例如传入"AB1C9“则返回"ABC"。
//  main.c
//  练习9-10

#include <stdio.h>
#include <string.h>

void del_digit( char s[]) {
    int i=0;
    int len = (unsigned int)strlen(s);
    for(i=0;i<len;i++){
        while(s[i] != '\0') {
            if (s[i] < '0' || s[i] > '9') {
                putchar(s[i]);
            }
            i++;
        }
    }
}

int main(int argc, const char * argv[]) {
    char s[10];
    printf("输入字符串:");
    scanf("%s", s);
    printf("输出字符串:");
    del_digit(s);
    printf("\n");
    
}
