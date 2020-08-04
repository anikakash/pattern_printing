#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, j, n, cnt;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        //printf("1");
        cnt=0;
        for(j=1;; j*=2)
        {
            if(cnt==i)
            {
                break;
            }
            else
            {
                printf(" %d",j);
                cnt++;
            }
        }
        printf("\n");

    }
    return 0;
}

