//6_3
#include <stdio.h>

void do_music()
{
    printf("play music!\n");
}

void do_game()
{
    printf("play game!\n");
}

void do_book()
{
    printf("play book!\n");
}


int main()
{
    //定义一个数组空间，保存key,每把钥匙都是函数行为
    void (*events[3])(void);
    //用户负责输入
    events[0] = do_game;
    events[1] = do_book;
    events[2] = do_music;

    int day;
    printf("input day:");
    scanf("%d",&day);

    //执行day天做的事
    events[day%3]();
    
    return 0;
}
