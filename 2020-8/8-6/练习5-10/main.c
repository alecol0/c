//编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。
//  main.c
//  练习5-10
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //构造数组
    int a[4][3] , b[3][4] , c[4][4] ;
    int i,j,k;
    scanf ("%d",&a[4][3]);
    scanf ("%d",&b[3][4]);
    for (i=0 ; i<4 ; i++){
        for (j=0 ; j<3 ; j++){
            printf ("%4d",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0 ; i<3 ; i++){
        for (j=0 ; j<4 ; j++){
            printf ("%4d",a[i][j]);
        }
        printf ("\n");
    }
    for (i = 0 ; i < 4 ; i++){
        for (j = 0 ; j < 4 ;j++){
            for (k = 0 ; k < 4 ; k++){
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }
    
    for (i = 0 ; i < 4 ; i++){
        for (j = 0 ; j < 4 ; j++){
            printf ("%4d",c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
