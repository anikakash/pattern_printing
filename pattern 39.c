#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int line = (n/2)+1;

    for(int s = 0; s < n-1; s++){
        printf(" ");
    }
    printf("#\n");
    int k = 1;
    int space = n-2;
    for(int i = 1; i <= n-1; i++){
        for(int s = 0; s < space; s++){
            printf(" ");
        }
        printf("#");
        for(int j = 0; j < k; j++){
            if(i+1 == line) printf("-");
            else printf(" ");
        }
        k+=2;
        space--;
        printf("#");
        printf("\n");
    }
    return 0;
}
