#include <stdio.h>
int main()
{
// print even number 
    for(int i=1; i<=10; i++){
        if(i %  2 == 0){
            printf("%d\n",i);
        }
    }
    printf(" \n ");
    printf(" \n ");
    printf(" \n ");
    printf(" \n ");

// print odd number
    for(int j=1; j<=100; j++){
        if (j % 2 == 1){
            printf("%d\n",j);
        }
    }
    return (0);
}