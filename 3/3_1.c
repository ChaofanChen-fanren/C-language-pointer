//3_1
#include <stdio.h>

int main()
{
    char a1 = 0x12;
    char b1 = '9';//表示字符9
    char c1 = '\12';//默认表示8进制数
    //char c1 = '\x12';//表示十六进制数

    printf("a1 = %d\t%o\t%x\n",a1,a1,a1);
    printf("a1 = %d, %o, %x, %c\n",b1,b1,b1,b1);
    printf("a1 = %d,%o,%x\n",c1,c1,c1);
    return 0;
}
