//8_3
#include <stdio.h>

int main()
{
    char s[] = "12345";

    char *temp = s;


    int cnt = 0,i = 0;
    //遍历字符串空间
    while(temp[i]){
        //每一个元素处理方式
        if(temp[i] == '4') cnt++;
        //遍历下一个位置
        i++;
    }
    //处理完,后续事件
    printf("the cnt is %d\n",cnt);
    return 0;
}
