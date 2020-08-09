//编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
//void sort3(int *n1,int *n2,int *n3){/*...*/}
//  main.c
//  练习10-3
//
//  Created by edz on 2020/8/9.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
/*void swap(int *px , int *py , int *pz){
 int temp = *px ;
 *px = *py ;
 *py = *pz ;
 *pz = temp ;
 }*/

void sort3(int *n1,int *n2,int *n3){
    int min;
    min=*n1;
    if (*n1>*n2){
        min=*n2;
        if (*n2>*n3){
            min=*n3;
        }
    }
    return ;
}
int main(int argc, const char * argv[]) {
    int n1 , n2 , n3 ;
    printf ("请输入：");
    scanf ("%d%d%d",&n1,&n2,&n3);
    printf("按照升序排列：\n");
    sort3(&n1, &n2, &n3);
    printf ("整数n1为%d\n",n1);
    printf ("整数n2为%d\n",n2);
    printf ("整数n3为%d\n",n3);
    return 0;
}
