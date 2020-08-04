#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i, j, n, cnt=1, x=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d", x);

        for(j=x/2; ; j=j/2)
        {
            if(cnt==i) break;
            else
            {
                printf(" %d", j);
                cnt++;
            }

        }
        cnt=1;
        x*=2;
        printf("\n");
    }
    return 0;
}


