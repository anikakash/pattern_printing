#include<stdio.h>

int main()
{
    int n;
    char s[10]={'A','B','C','D','E','F','G','H','I','J'};
    scanf("%d",&n);
    for(int i=0; i<n; i++){
            for(int k=n-(i+1); k>0; k--){
                printf(" ");
            }
        for(int j=i; j>=0; j--){
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}
