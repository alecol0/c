//
//  main.c
//  计算位数
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        num = num / 10 ;
        count++;
    } while (num !=0);
    printf("%d\n",count);
    return 0;
}
