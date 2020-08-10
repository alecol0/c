// 在代码清单12-3的基础上，编写显示对象takao各成员地址的程序。
//  main.c
//  练习12-1
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#define num 64
struct student{
    char name[num];
    int height;
    float weight;
    long schools;
};

int main(int argc, const char * argv[]) {
    struct student takao={"Takao",173,86.32};
    printf("姓名的地址=%p\n",&takao.name);
    printf("身高的地址=%p\n",&takao.height);
    printf("体重的地址=%p\n",&takao.weight);
    printf("奖学金的地址=%p\n",&takao.schools);
    return 0;
}
