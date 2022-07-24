#include <stdio.h>
#include <stdlib.h>

int fun(){
    static int a = 10;
    a++;
    printf("%d\n",a);
    return 0;
}

int main()
{
    //这里能访问a吗?
    //printf("%d\n",a);  这里编译报错了
    //访问a必须可以拥有他的地址
    fun();

    //这里能访问a吗?
    //printf("%d\n",a);
    fun();
    fun();
    return 0;
}
