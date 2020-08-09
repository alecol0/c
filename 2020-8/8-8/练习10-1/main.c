//编写函数adjust_point，如果n指向的值小于0,就将其改为0:如果值大于100,就将其改为100(如果是0〜100的值，则不修改)。
//void adjust_point(int *n){/*...*/}
//  main.c
//  练习10-1
//
//  Created by edz on 2020/8/8.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void adjust_point(int *n){
    
    if (*n < 0)
        *n = 0 ;
    if (*n > 100)
        *n = 100 ;
    
    return ;
}

int main(int argc, const char * argv[]) {
    int a ;
    printf ("请输入数字：");
    scanf ("%d\n",&a);
    adjust_point(&a);
    printf("输出：%d\n",a);
    return 0;
}
