#include<stdio.h>

int main()
{
    int n, i, j, x=1, cnt=1;
    scanf("%d",&n);
    for(i=1; i<n;i++){
        printf("%d",x);
        for(j=x-1; cnt<i; j--){
            printf(" %d",j);
            cnt++;
        }
        cnt=1;
        x++;
        printf("\n");
    }
    x = n;
    for(i=n;i>0; i--){
        printf("%d", x);
        for(j=x-1; cnt<i; j--){
            printf(" %d",j);
            cnt++;
        }
        cnt=1;
        x--;
        printf("\n");
    }
    return 0;
}
