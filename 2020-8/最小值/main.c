//
//  main.c
//  运算结果为1和0
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b , c , min ;
    puts ("请输入三个数");
    scanf ("%d%d%d",&a,&b,&c);
    min = a ;
    if (b<min)
        min = b ;
    if (c<min)
        min = c ;
    printf ("min is %d\n" , min );
    
    
    return 0;
}
