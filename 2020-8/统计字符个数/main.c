//
//  main.c
//  统计字符个数
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
// 输入10个字符，统计其中的英文字母、数字字符和其他字符的个数。
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int letter = 0 , digit =0 , other = 0 , i ;
    char ch;
    for (i=1;i<=10;i++){
    scanf ("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        letter++ ;
    }
    else if(ch>='0'&&ch<='9'){
            digit++;
        }
    else {
        other++;
    }
    }
    printf("英文字母有%d个\n",letter);
    printf("数字字符有%d个\n",digit);
    printf("其它字符有%d个\n",other);
    return 0;
}

