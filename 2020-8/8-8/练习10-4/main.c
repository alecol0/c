//编写如下set_idx函数，接收元素类型为int型、元素个数为n的数组，并为所有元素赋上和下标相同的值。
//void set_idx(int *v,int n){/*•••*/}
//  main.c
//  练习10-4
//
//  Created by edz on 2020/8/9.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#define i 5
void set_idx(int *v,int n){
    for (n=0;n<i;n++){
        v[n]=n;
    }
    
}

int main(int argc, const char * argv[]) {
    int n ;
    int a[i];
    set_idx(a, i);
    for (n=0;n<i;n++){
        printf("a[%d]=%d\n",n,n);
    }
    
    return 0;
}
