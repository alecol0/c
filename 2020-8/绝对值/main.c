//
//  main.c
//  绝对值
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i ;
    scanf ("%d",&i);
    if (i==0){
        printf("%d\n",i);
    }
        else if (i<0){
            printf("%d\n",-i);
        }
        else if (i>0){
                printf ("%d\n",i);
        }
    return 0;
}
