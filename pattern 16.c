#include<stdio.h>

int main()
{
    int n, i, j,cnt=1, x=0, y=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        x+=y;
        printf("%d",x);
        for(j=x-1; cnt<i; j--)
        {
            printf(" %d", j);
            cnt++;
        }
        cnt=1;
        y++;
        printf("\n");
    }
    return 0;
}
