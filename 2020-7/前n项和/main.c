//
//  main.c
//  前n项和
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n,sum=0;
    int it,flag=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        it=flag*1.0/(2*i-1);
        sum=sum+it;
        flag=-flag;
    }
    printf("sum=%d\n",sum);
    return 0;
}
