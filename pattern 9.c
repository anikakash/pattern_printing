#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, n;
    scanf("%d",&n);
    int x=n;
    for(i=1;i<=n;i++){
            printf("%d",x);
        for(j=i+1; j<=n;j++){
            printf(" %d",x);
        }
    x--;
        printf("\n");
    }
    return 0;
}

