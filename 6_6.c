#include <stdio.h>

int main(void)
{
    int jumsu;
    char grade;

    printf("점수 입력 : ");
    scanf_s("%d", &jumsu);

    if(jumsu >= 90)
    {
        grade = 'a';
    }
    else if(jumsu >= 80)
    {
        grade = 'b';
    }
    else if(jumsu >= 70)
    {
        grade = 'c';
    }
    else if(jumsu >= 60)
    {
        grade = 'd';
    }
    else
    {
        grade = 'f';
    }

    printf("점수 등급 : %c학점\n", grade);

}