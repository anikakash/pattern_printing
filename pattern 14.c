#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, n,x=0, cnt=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1+x; ;j++){
                if(cnt==0){
                    printf("%d",j);
                    cnt++;
                    x++;
                }
            else if(i>cnt){
                printf(" %d",j);
                cnt++;
                x=j;
            }
            else{
                break;
            }
        }
        cnt=0;
        printf("\n");

    }
    return 0;
}

