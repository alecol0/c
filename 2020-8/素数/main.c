//
//  main.c
//  素数
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, m;
    scanf("%d", &m);
    for( i = 2; i <= m/2; i++ ){
        if( m % i== 0 )//m能被i整除，则不是素数
            break;
    }
    
    if( i>m/2 && m!=1 )
        printf("Yes\n");
    else
        printf("No!\n");
    return 0;
}
