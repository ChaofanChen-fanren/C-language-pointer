#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *rlc_encode(char *data,int *len)
{
    char *res = NULL;
    int i;
    int data_len = *len;
    int cnt = 1;  //计数器，统计有多少前后有多少个不一样的元素
    char temp = data[0];
    //计算原始数据的特定,决定分配多少空间
    for(int i = 1;i < data_len;i++){
        if(data[i] != temp){
            cnt++;
            temp = data[i];
        }
    }
    //申请编码后的空间
    res = (char *)malloc(cnt*2);
    *len = cnt*2;
    //填充编码空间
    res[0] = data[0];
    int res_index = 1;
    temp = data[0];
    cnt = 1;
    for(i = 1;i < data_len;i++){
        if(data[i] != temp){
            res[res_index] = cnt;
            res_index++;
            res[res_index] = data[i];
            res_index++;
            cnt = 1;
            temp = data[i];
        }else{
            cnt++;
        }
    }
    res[res_index] = cnt; //最后一个计数填充
    return res;
}
void rlc_release(char *data)
{
    free(data);
}
int main(void) { 
    //原始数据
    char raw_data[] = {0x11,0x11,0x11,0x11,
                        0x22,0x22,
                        0x33,0x33,0x33
                        };
    //将原始数据进行编码
    int data_len = sizeof(raw_data)/sizeof(raw_data[0]);
    int i;
    //将原始数据传入编码函数  data_len传入传出参数
    char *result = rlc_encode(raw_data,&data_len);
    //查看结果
    for(i = 0;i < data_len;i++){
        printf("0x%02x ",result[i]);
    }
    printf("\n");
    rlc_release(result);//记得释放
    return 0;
    
}
