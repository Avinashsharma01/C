#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=2; i++){
        printf("%d)This is i\n",i);
        for(j=1; j<=3; j++){
            printf("    %d)This is j\n",j);
            for(k=1; k<=4; k++){
                printf("        %d)This is k\n",k);
            }
        }
    }
    return (0);
}