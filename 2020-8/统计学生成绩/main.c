//
//  main.c
//  统计学生成绩
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, failed;
    double grade, sum;
    num = failed = 0;
    sum = 0;
    printf("Enter grades:");
    scanf("%lf", &grade);
    while( grade >=0 ) {
        sum = sum + grade;
        num ++;
        if( grade < 60 )
            failed ++;
        scanf("%lf", &grade);//输入下一个人的成绩
    }
    if( num != 0 )
        printf("Grade average is %f\n", sum/num);
    printf("Number of failures is %d\n", failed);
    return 0;
}
