#include<stdio.h>

int main()
{
    int n, x=2;;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int k=(2*n)-x; k>0; k--){
            printf(" ");
        }
        for(int j=i; j>0; j--){
        if(j==i){
            printf("*");
        }
        else{
            printf(" *");
        }

        }
        printf("\n");
        x+=2;
    }
    return 0;
}

