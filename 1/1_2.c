#include <stdio.h>
#define ABC 10

int main()
{
    int include = ABC;
#ifdef DEBUG
    printf("Debug\n");
#else
    printf("No Debug\n");
#endif
    return 0;
}
