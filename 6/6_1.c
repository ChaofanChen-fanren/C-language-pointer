//6_1
#include <stdio.h>

int main()
{
    //int printf (const char *__restrict __fmt, ...)
    int (*myshow)(const char *__restrict __fmt, ...);
    myshow = printf;
    myshow("hello world!\n");
    return 0;
}
