#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, n;
    scanf("%d",&n);
    int x=n+1;
    for(i=0;i<n;i++){
            printf("0");
        for(j=1; j<x;j++){
            printf(" %d",j);
        }
        x--;
        printf("\n");
    }
    return 0;
}

