#include<stdio.h>

int main()
{
    int i, j, n, x;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("1");
        int cnt=1;
        for(j=2; cnt<i; j*=2)
        {
            printf(" %d",j);
            cnt++;
            x = j;
        }
        if(i!=1)
        {
            for(int k=x/2; k>=1; k/=2)
            {
                printf(" %d",k);
            }
        }

        printf("\n");
    }
    return 0;
}
