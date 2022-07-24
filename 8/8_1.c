//8_1
#include <stdio.h>

int main()
{
    char *s1 = "12345";

    printf("the s1 size %ld; the str size:%ld\n",
            sizeof(s1),sizeof("12345"));

    return 0;
}
