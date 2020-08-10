//对代码清单12-7的程序进行改写。
//不将姓名、身高等数据作为初始值，而是从键盘输入。
//可以选择按身高进行升序排列，或者按照姓名的顺序排列。
//  main.c
//  练习12-4
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include<string.h>

#define number 5
#define num 64

typedef struct{
    char name[num];
    int height;
    float weight;
    long schols;
}Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}
void sort_by_height_or_name(Student a[], int n)
{
    int i, j, temp;

    puts("请输入0或者1。(0---按身高排序，1---按姓名排序)");
    printf("选择: ");    scanf("%d", &temp);
    if (temp == 0)
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = n; j > i; j--)
            {
                if (a[j - 1].height > a[j].height)
                    swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
      if (temp == 1)
        {
            for (i = 0; i < n - 1; i++)
            {
                for (j = n; j > i; j--)
                {
                    if (a[j - 1].name[0] > a[j].name[0])
                        swap_Student(&a[j - 1], &a[j]);
                }
            }
        }
    }

int main(int argc, const char * argv[]) {
    int i;
    Student std[number];

    printf("请依次输入姓名，身高，体重，奖学金。(数据之间以一个空格隔开)\n");
    for (i = 0; i < number; i++)
    {
        printf("学生%d: ", i + 1);
        scanf("%s %d %f %ld",
               std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }
    sort_by_height_or_name(std, number);
    puts("\n排序如下。");
    for (i = 0; i < number; i++)
    {
        printf("%-8s %6d%6.1f%7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    return 0;
}
