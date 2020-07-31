//
//  main.c
//  pai
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

double pi (int n){
    double sum = 0 ,item;
    int i , flag = 1 ;
    for (i=1 ; i<=n ; i++){
        item = flag * 1.0/(2*i -1);
        sum = sum + item ;
        flag = -flag;
    }
    return sum * 4;
}

int main(int argc, const char * argv[]) {
    int n ,sum ;
    scanf ("%d",&n);
    printf("sum=%d\n",sum);
    return 0;
}
