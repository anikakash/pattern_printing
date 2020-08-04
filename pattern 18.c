#include<stdio.h>

int main()
{
    int i, j, n, cnt=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
            printf("%d", (2*n)-1);
        for(int j=(2*n)-3; cnt<i; j-=2){
            printf(" %d",j);
            cnt++;
        }
        cnt=1;
        printf("\n");
    }

    return 0;
}
