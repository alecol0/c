// 将代码清单11-3中对p的赋值进行如下修改。
//p = "456" + 1;
//  main.c
//  练习11-1
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *p = "123";
    
       printf("p = \"%s\"\n", p);
    
       p = "456"+1;
    
       printf("p = \"%s\"\n", p);
    

    return 0;
}
