//5_1
#include <stdio.h>

int main()
{
    int a[3][4];
    int (*k1)[4];
    //int *k1;

    k1 = a;
    printf("a = %p, a + 1 = %p\n",a,a + 1);
    printf("k = %p, k + 1 = %p\n",k1,k1 + 1);
    return 0;
}
