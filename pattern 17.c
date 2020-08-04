#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, n, x, cnt=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
            printf("2");
        for(j=4; ;j+=2){
            if(cnt<i){
                printf(" %d",j);
                cnt++;
            }
            else{
                break;
            }
        }
        printf("\n");
        cnt=1;
    }
    return 0;
}
