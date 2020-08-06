//
//  main.c
//  数组-斐波那契数列
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
int search(int a[], int n , int x ){
    for (int i=0 ; i<n ; i++){
        if (x==a[i])
            return i;
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    int i ;
    int fib[10]={1 , 1 };
    for (i=2;i<10;i++){
        fib[i]=fib[i-2]+fib[i-1];
    }
    for (i = 0 ; i<10; i++) {
        printf("%4d",fib[i]);
    }
    printf("0x%lx\n",(unsigned long)fib);
    int x=13;
    int index = search (fib , 10 ,x);
    if (index==-1){
        printf("在fib中没找到%d\n",x);
    }
    else {
        printf("%d的下标是%d",x,index);
    }
    printf("\n");
    return 0;
}
