#include <stdio.h>
int main()
{
    int i, j,n=20;
    for(i=1; i<=n; i++){
        for(j=1; j<=3; j++){
            printf("%d Hello\n",i);
            if(i==2){
                break;
            }
        }
    }
    return (0);
}