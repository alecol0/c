//编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。
//  main.c
//  练习2-5
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double i,n;
    scanf ("%lf%lf",&i,&n);
    printf("result =%.1f%%\n",(double)i/n*100);
    return 0;
}
