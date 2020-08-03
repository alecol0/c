//
//  main.c
//  pai--while
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    double item = 1.0 ,sum = 0 ;
    int flag = 1 ;
    int fenmu = 1 ;
    while (fabs(item)>=0.000001) {
        sum = sum + item ;
        //计算下一项的值
        flag = - flag ;
        fenmu = fenmu + 2 ;
        item = flag * (1.0 / fenmu );
    }
    sum = sum + item ;
    
    printf("pi is %lf\n\n",sum * 4);
    return 0;
}
