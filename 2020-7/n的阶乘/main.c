//
//  main.c
//  n的阶乘
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int factorial(int n){
    int i , fac = 1 ;
    for(i=1;i<=n;i++){
        fac = fac *i;
    }
    return fac;
}
int main(int argc, const char * argv[]) {
    int n ;
    scanf ("%d",&n);
    int i;
    for(i=0;i<=n;i++){
        int result = factorial(i);
        printf("fac(%d)=%d\n",i,result);
    }
    return 0;
}
