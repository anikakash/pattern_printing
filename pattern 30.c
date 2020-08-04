#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
            for(int k=(2*n)-(2*i); k>0; k--){
                printf(" ");
            }
        for(int j=1; j<=2*i-1; j++){
           if(j==1){printf("%c",64+j);}
            else { printf(" %c",64+j);}
                //printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}

/*
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I


*/
