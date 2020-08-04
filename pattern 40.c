#include<stdio.h>

int main()
{
    int n, j;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for( j=1; j<n ;j++){
         /*if((i>1 && i<n)&&(j>1 && j<n))printf("  ");
         else printf("* ");*/
         if(i==1) printf("* ");
         else if(j==1)printf("* ");
         else if(i==j) printf("* ");
         else if(i==n) printf("* ");
            else printf("  ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}






/*
* * * * *
*       *
*       *
*       *
* * * * *
*/

