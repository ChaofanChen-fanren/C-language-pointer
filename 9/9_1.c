//9_1
#include <stdio.h>

typedef int(*show_t)(const char *__format, ...);

int main()
{
    //int (*myshow)(const char *__format, ...);
    show_t myshow;
    myshow = printf;
    myshow("hello world\n");
    return 0;
}
