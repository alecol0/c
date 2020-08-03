//
//  main.c
//  练习3-12对3-4的修改
//printf("请输入一个整数：");
//scanf("%d", &no);
//if (no % 2)
//    puts("输入的整数是奇数");
//else
//    puts("输入的整数是偶数");


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n ;
    puts ("请输入：\n");
    scanf ("%d",&n);
    switch (n%2) {
        case 0: puts ("输入的整数是偶数\n");
            break;
        case 1: puts ("输入的整数是奇数\n");
            break;
    }
    
    return 0;
}
