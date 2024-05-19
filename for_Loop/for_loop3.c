#include <stdio.h>
int main()
{
    int i,j,n;
    for(i=1; i<=2; i++){
        printf("%d)This is i\n",i);
        for(j=1; j<=3; j++){
            printf("    %d) This is j\n",j);
        }
    }
    return (0);
}