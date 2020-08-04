#include<stdio.h>

int main()
{
    int n, i, k, j;
    scanf("%d",&n);
    for(int i=n; i>1; i--){
        for(k=0; k<n-i; k++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(k=0; k<n-i; k++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

    */

