//
//  main.c
//  最大值
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b , c , MAX ;
    puts ("请输入三个数：");
    scanf ("%d%d%d",&a,&b,&c);
    MAX = a ;
    if (b>MAX)
        MAX = b ;
    if (c>MAX)
        MAX = c ;
        printf("max is %d\n",MAX);
    return 0;
}
