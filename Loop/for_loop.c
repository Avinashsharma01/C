#include <stdio.h>
int main()
{
    //this program is used to print table of any number 
    int n;
    printf("Enter any number to print table:- ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", n,i, n*i);
    }
    return (0);
}