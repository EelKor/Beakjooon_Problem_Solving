#include <stdio.h>

int main()
{
    int M,N;
    int sum = 0;
    int min = 10000;

    scanf("%d" , &M);
    scanf("%d", &N);

    for (int num = 1; num*num <= N; num++)
    {
        if (num*num >= M)
        {
            sum += num*num;
            min = min<sum ? min:sum;
        }
        
    }
    if(sum == 0) printf("-1");
    else printf("%d\n%d", sum, min);
    
    return 0;
}