#include<stdio.h>

int main()
{
    int i, j, n, x, cnt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2==0)
            {
                if(j%2!=0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            else
            {
                if(j%2!=0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
