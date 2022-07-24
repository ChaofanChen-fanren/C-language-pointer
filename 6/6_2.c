//6_2
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
    int day;
    printf("input day:");
    scanf("%d",&day);

    switch (day){
        case 1:
            do_music();
            break;
        case 2:
            do_game();
            break;
        case 3:
            do_music();
            break;
        default:
            break;
    }

    return 0;
}
