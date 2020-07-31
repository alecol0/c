//
//  main.c
//  利息
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    float money,year,rate;
    float sum;
    scanf("%f%f%f",&money,&year,&rate);
    sum=money*pow((1+rate),year);
    
    printf("sum is %f\n",sum);
    return 0;
}
