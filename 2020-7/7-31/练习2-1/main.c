//编写一段程序，读取两个整数，然后显示出前者是后者的百分之几
//  main.c
//  7-31
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//


#include <stdio.h>

int main (int argc, const char * argv[]){
    int i,n;
    scanf ("%d%d",&i,&n);
    float result = (double)i/n*100;
    printf("result = %.1f%%\n",result);
return 0;
}
