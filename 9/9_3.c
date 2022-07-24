//9_3
#include<stdio.h>

void myswap(int *a1,int *a2)
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
    printf("swap: a1 = %d,the a2 = %d\n",*a1,*a2);
}

int main()
{
    int a = 20;
    int b = 30;

    myswap(&a,&b);
    printf("the a = %d,the b = %d\n",a,b);
    return 0;
}
