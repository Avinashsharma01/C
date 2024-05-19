#include <stdio.h>
int main()
{
    int password;
    Enter_again:   //  this is the label which is used to goto 
    printf("Enter your password:- ");
    scanf("%d",&password);
    if(password!=1234){
        printf("Your Password is wrong \n ");
        printf(" \n ");
        goto Enter_again;   // here is the use of goto keyword
    }
    printf("This is your password:- (%d)",password);
    return (0);
}


// the use of goto is 
//1. Exit from the loop 
//2. for error handling 
//3. etc