//
//  main.c
//  二维数组遍历
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    srand((unsigned int )time(NULL));
    // insert code here...
    int a[3][2];
    for (int i=0;i<3 ;i++){
        for (int j=0;j<2;j++){
            a[i][j]=rand()%100;
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    
    int imin = 0 ;
    int jmin = 0 ;
    for (int i=0;i<3 ;i++){
        for (int j=0;j<2;j++){
            if(a[i][j]<a[imin][jmin]){
                imin=i;
                jmin=j;
            }
        }
    }
    printf("a[%d][%d]=%d\n",imin,jmin,a[imin][jmin]);
    return 0;
}
