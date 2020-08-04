#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    for(int i = 0; i < n; i++){
        for(int s = 0; s < space; s++){
            printf(" ");
        }
        int j = i;
        for(int k = j; k >= 0; k--){
            printf("%d",k);
        }
        for(int k = 1; k <= i; k++){
            printf("%d",k);
        }
        space--;
        printf("\n");
    }
    space=1;
    for(int i=n-2; i>=0; i--){
        for(int s=space; s>0; s--){
            printf(" ");
        }
        int j=i;
        for(int k=j; k>=0; k--){
            printf("%d",k);
        }
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        space++;
        printf("\n");
    }

    return 0;
}
