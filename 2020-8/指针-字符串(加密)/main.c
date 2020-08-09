//
//  main.c
//  指针-字符串(加密)
//
//  Created by edz on 2020/8/7.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

//void encrypt(char s[]){
void myencrypt(char *s){
    //遍历每个字符并修改它
    /*  int i = 0 ;
    while (s[i] != '\0' ){
        s[i] = s[i] + 1 ;
        i++;
    }
    */
    while (*s != '\0'){
        *s = *s +1 ;
        // *s=(*s=='z')?'a':(*s+1);
        s++;
        // s = s + 1;
    }
}

int main(int argc, const char * argv[]) {
    char s[100];
    scanf ("%s",s);
    myencrypt(s);
    printf("%s\n",s);
    printf("\n");
    return 0;
}
