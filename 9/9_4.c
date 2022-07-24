//9_4
#include <stdio.h>
#include <stdlib.h>
char * fun1(int flags)
{
    //static char buf[32]; //static有效  不用free
    char *buf;
    buf = (char *)malloc(32);
    
    snprintf(buf,32,"====%d====",flags);
    return buf;
}

void free_fun(void *p)
{
    free(p);
}
int main()
{
    char *res;

    printf("=======\n");
    res = fun1(10);
    printf("%s\n",res);
    free_fun(res);

    res = fun1(20);
    printf("%s\n",res);
    free_fun(res);
    return 0;
}
