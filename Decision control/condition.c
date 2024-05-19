#include <stdio.h>
int main()
{
    int age, i;
    printf("Enter any to start checking conditions:- ");
    scanf("%d", &i);
    while (i++)
    {
        if(i>=5){
            break;
        }
        printf("Enter your age :- ");
        scanf("%d", &age);
        if (age <= 10)
        {
            printf("You can't vote becouse your age is %d\n", age);
            printf("this is the value of i %d\n",i);
        }
        else if (age <= 15)
        {
            printf("Still you can't vote becouse your age is %d\n", age);
            printf("this is the value of i %d\n",i);
        }
        else if (age<= 18)
        {
            printf("Yes you can vote %d\n", age);
            printf("this is the value of i %d\n",i);
        }
        else
        {
            printf("Avinash Sharma");
            printf("this is the value of i %d\n",i);
        }
   
    }
    return (0);
}