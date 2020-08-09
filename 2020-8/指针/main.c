//
//  main.c
//  指针
//
//  Created by edz on 2020/8/7.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void printArray ( int a[] , int n ){
    for (int i = 0 ; i < n ; i++){
        printf("%4d",a[i]);
    }
    printf ("\n");
} //打印数组

int main(int argc, const char * argv[]) {
#if 0
    int x =100 ;
    int *p ;
    p = &x ;
    
    printf("0x%lx\n",(unsigned long)p);
    printf("0x%lx\n",(unsigned long)&p);
    printf("0x%lx\n",(unsigned long)&x);
    
    printf ("%d\n",*p);
    *p = 200 ;
    printf ("%d\n",x);
#endif
    
    int a [10];
    printf("0x%lx\n",(unsigned long)a);
    printf("0x%lx\n",(unsigned long)&a[0]);
    printArray(a,10);
    return 0;
}
