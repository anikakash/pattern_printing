#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>0; i--){
        for(int k=(2*n)-(2*i); k>0; k--){
            printf(" ");
        }
        for(int j=i; j>1;j--){
            printf("# ");
        }
        printf("#");
        printf("\n");
    }

    return 0;
}
/*
# # # # # i=5 space = 0
  # # # # i=4 space = 2
    # # # i=3 space = 4
      # # i=2 space = 6
        # i=1 space = 8

*/
