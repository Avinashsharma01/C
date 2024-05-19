#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :- ");
    scanf("%d",&age);
    if(age<18){
        printf("You are too young");
    }
    else if(age>70){
        printf("You are too old");
    }
    else{
        printf("You are eligible for vote");
    }
    return (0);
}