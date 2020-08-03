//输入10个字符，分别统计出其中空格或回车、数字和其他字符的个数。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int blank = 0 , digit = 0 , other = 0 , i ;
    char ch ;
    for (i=0;i<10;i++){
        scanf ("%c",&ch);
        switch (ch)
        {
            case ' ':
            case '\n':blank++;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':digit++;
                break;
            default:other++;
                break;
        
        }
    }
    printf("空格或回车的个数为%d\n",blank);
    printf("数字的个数为%d\n",digit);
    printf("其它的个数为%d\n",other);
    
    return 0;
}
