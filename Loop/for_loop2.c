#include <stdio.h>
int main()
{
    int i,j,n=3 ,count=0;
    for(i=1; i<=3; i++){
        for(j=1;  j<=20; j++){
            count++;
            printf("%d %d HEllo\n",i, j);
            printf("%d",count);
            if(i==2){
                break;
            }

        }
    }
    return (0);
}