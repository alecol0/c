//
//  main.c
//  数组-最小元素
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

printArray(int a[] , int n ){
    for (int i=0 ; i<n ;i++){
        printf("%4d",a[i]);
    }
    printf ("\n");
}

void find_min_swap(int a[] , int n ){
    //找最小的下标
    int imin = 0 ;
    for (int i = 1 ; i < n ; i++){
        if (a[i] < a [imin]){
            imin = i ;
        }
    }
    
    //最小的元素和0号元素交换
    if (imin !=0 ){
    int temp = a[imin];
    a[imin] = a[0];
    a[0] = temp;
    }
}
int main(int argc, const char * argv[]) {
    //构造数组
    int size = 10;
    int a[size];
    srand(unsigned int)time(NULL));
    for (int i=0;i<10;i++){
        a[i]=rand() % 100 ;
        printf("%4d",a[i]);
    }
    printArray(a,size);
    
    //选一个最小的出来交换
    find_min_swap(a,size);
    printArray(a,size);
    return 0;
}
