#include<stdio.h>

int main()
{
    int  n, j;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for( j=1; j<=n ;j++){
         if(i==1 ) printf("# ");
         else if(i==n) printf("# ");
         else if(i==j) printf("# ");
         //else if(j==n-(i-1)) printf("* ");
         else if(i==1 && i==n) printf("#");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
/*
n=5;
#       #
  #   #   i=2 j==4 p:#
    #     i=3 j==3 p: #
  #   #   i=4 j==2 p: #
#       #
------------------
n=4;
#     #
  # #
  # #
#     #

*/


