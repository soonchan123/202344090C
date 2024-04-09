#include <stdio.h>

int main()
{
    int x=1;
    int sum=0;
    int n;
    
    printf("n : ");
    scanf("%d", &n);

    while(1)
    {
        if(x % 2 == 0)
        {
            sum += x;
        }
        x++;
        if(x>n)
        {
            break;
        }
    }
    printf("%d부터 %d까지의 짝수의 합 : %d\n",1,n,sum);

    return 0;
}
