#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, j, cnt=0;
    scanf("%d",&n);
    int x=n;
    for(j=0; j<=x; j++){
        for(i=n;i>0;i--){
            printf("%d",i);
        }
        n--;
        printf("\n");
    }
    return 0;
}
