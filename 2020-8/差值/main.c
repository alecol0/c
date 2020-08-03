//
//  main.c
//  差值
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a , b ;
    scanf ("%d%d",&a,&b);
    int result = a - b ;
    if (result < 0){
        result = -result;
    }
    if (result <= 10)
        puts ("它们的差小于等于10\n");
    else
        puts ("它们的差大于等于11\n");
    
    return 0;
}
