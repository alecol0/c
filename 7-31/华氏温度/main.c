//
//  main.c
//  华氏温度
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int f ;
    int c ;
    printf ("F\t\t\t\t");
    printf ("C\t\t\t\t\n");
    for (f=40;f<=300;){
        c = 5 * (f-32)/9;
        printf("%d\t\t\t\t",f);
        printf("%d\n",c);
        f = f + 20;
        if ( f<=/* DISABLES CODE */ (260)&&f>=280){
          continue;
        }
        
    }
    return 0;
}
