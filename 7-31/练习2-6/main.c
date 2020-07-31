//编写一段程序，读取表示身高的整数，显示出标准体重的实数值。标准体重根据公式(身高-100)X0.9进行计算，所得结果保留一位小数。
//  main.c
//  练习2-6
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i ;
    float n;
    printf("输入身高：");
    scanf ("%d",&i);
    n=(i-100)*0.9;
    printf("体重为：%.1f\n",n);
    return 0;
}
