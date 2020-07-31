//编写一段程序，读取两个整数，然后输出它们的和以及积。
//  main.c
//  练习2-2
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b ;
    scanf ("%d%d" , &a , &b );
    int sum , result ;
    sum = a + b ;
    result = a * b ;
    printf("和是%d , 积是%d\n" , sum ,result );
    return 0;
}
