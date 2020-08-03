//
//  main.c
//  比较大小
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b ;
    scanf ("%d%d",&a,&b);
    if (a==b){
       puts("A和B相等\n");
    }
    else if (a>b){
        puts ("A大于B\n");
    }
    else if (a<b){
    puts("A小于B\n");
    }
    return 0;
}
