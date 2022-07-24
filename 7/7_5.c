//7_5
#include <stdio.h>

int main(){
    const int a = 0x12345678;
    char buf[4];
    

    buf[0] = 0x11;
    buf[1] = 0x22;
    buf[2] = 0x33;
    buf[3] = 0x44;
    buf[4] = 0x99;

    printf("the a is %x\n",a);
    return 0;
}
