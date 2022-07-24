//5_2
#include <stdio.h>

int main()
{
    int a[3][4][5];
    int (*k)[4][5];

    k = a;
    printf("a = %p, a + 1 = %p\n",a,a + 1);
    printf("k = %p, k + 1 = %p\n",k,k + 1);
    return 0;
}
