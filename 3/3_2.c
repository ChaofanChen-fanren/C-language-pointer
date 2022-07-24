//3_2
#include <stdio.h>

int main()
{
    char a = 12;
    printf("size: char = %ld\n",sizeof a);
    printf("size: int  = %ld\n",sizeof(int));
    printf("size: short  = %ld,size: long  = %ld\n",sizeof(short),sizeof(long long));
    return 0;
}
