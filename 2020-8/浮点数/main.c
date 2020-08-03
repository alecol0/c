//
//  main.c
//  浮点数
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double x ;
    scanf("%lf",&x);
    if ( x < 0){
        x = - x;
        printf ( "%lf\n" , x);
    } else {
        printf("%lf\n",x);
    }
    
    return 0;
}
