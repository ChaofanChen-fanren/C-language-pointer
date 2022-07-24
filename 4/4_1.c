//4_1
#include <stdio.h>

int main()
{
    char *p1 = (char *)100;
    int *p2 = (int *)100;

    //要素1 存储地址大小
    printf("%ld : %ld\n",sizeof(p1),sizeof(p2));

    //要素2 访问的下一个地址是多少
    printf("%p : %p\n",p1,p2);
    printf("%p : %p\n",p1 + 1,p2 + 1);
}
