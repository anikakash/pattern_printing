#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, j, cnt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf("%d",n-j);
        }
        printf("\n");
    }
    return 0;
}
