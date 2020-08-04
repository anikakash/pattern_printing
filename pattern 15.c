#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, n,x=1, cnt=0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=x; ;j++){
                if(i==1){
                    printf("%d",x);
                    x++;
                    break;
                }
                   else if(cnt==0){
                    printf("%d",j);
                    cnt++;
                    x++;
                }
            else if((i*2)-2>=cnt){
                printf(" %d",j);
                cnt++;
                x=j+1;
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

