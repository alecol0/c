//根据输入的月份输出该月的天数，假设该年份不是闰年怎么用最少的分支结构完成
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year ;
    scanf ("%d",&year);
    if ((year%4==0 && year%100==0)||year%400==0){
        printf("%d年是闰年\n",year);
    }
    else
        printf("%d年不是闰年\n",year);
    
    return 0;
}
