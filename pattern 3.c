#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=i; j>0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
