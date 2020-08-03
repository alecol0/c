//
//  main.c
//  显示数值是否相等
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b , c ;
    scanf ("%d%d%d",&a,&b,&c);
    if (a==b&&b==c)
        puts("三个值都相等\n");
    else
        if (a==b||a==c||b==c)
            puts ("有两个值相等\n");
    
        else
            puts("三个值各不相同\n");
    
    return 0;
}
