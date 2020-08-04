#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, n;
    scanf("%d",&n);
    for(i=1; i<=n;i++){
        for(j=1;j<=i; j++){
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
