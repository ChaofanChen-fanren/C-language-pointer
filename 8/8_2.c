//8_2
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "12345";

    printf("the s size :%ld\n",sizeof(s)/sizeof(s[0]));
    printf("the s size :%ld\n",strlen(s));
    return 0;
}
