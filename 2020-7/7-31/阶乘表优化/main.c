//
//  main.c
//  阶乘表
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i ,n ;
    int re = 1 ;
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        re = re * i ;
        printf("阶乘(%d)=%d\n",i,re);
    }
    return 0;
}
