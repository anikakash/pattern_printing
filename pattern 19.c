#include<stdio.h>

int main()
{
    int n, x=1, cnt=1, i, j;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
            printf("%d", x);
        for(j=x+x; cnt<i; j+=x){
            printf(" %d",j);
        cnt++;
        }
        cnt=1;
        x++;
        printf("\n");
    }

    return 0;
}
