#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, j, cnt=0;
    scanf("%d",&n);
    int x=n;
    for(i=n; i>0; i--){
        for(j=1; j<=x; j++){
            printf("%d",j);
        }
        x--;
        printf("\n");
    }
    return 0;
}

