#include <stdio.h>
int main()
{
    int a;
    int str[]={1,2,3,4,5};
    printf("Enter any number to print:- ");
    scanf("%d",&a);
    if(0){
        printf("This is not going to be print becouse it is falsy value ");
    }
    if(NULL){
        printf("This is also not print becouse it is falsy value");
    }
    if(a<=10){
        printf("This is going to be print:- %d ",a);
    }
    if(a==5){
        printf("This is actually equal to the 5 %d :- ",a);
    }
    printf("this is string %d ", str[0]);
    return (0);
}