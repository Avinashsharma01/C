#include <stdio.h>
int main()
{
    int age;
    char is_indian, gender;
    int phone, adhar,pincode;
    printf("Are you indian(Y/N):-  ");
    scanf(" %c", &is_indian);
    if (is_indian == 'y' || is_indian == 'Y' )
    {
        printf("Enter your gender here(m/w):- ");
        scanf(" %c", &gender);
        if (gender == 'm' || gender == 'M')
        {
            printf(" (Male) Please Enter your age here :- ");
            scanf(" %d", &age);
            if (age < 18)
            {
                printf("(Male) You are too young. ");
            }
            else if (age > 70)
            {
                printf("(Male) You are too old. ");
            }
            else
            {
                printf("(Male) You are eligible for it.");
                printf("please coprate us and some details more.\n ");
            }

            printf("Enter your phone number:- \n ");
            scanf("%d",&phone);
            printf("Enter your adharCard No:- \n");
            scanf("%d",adhar);
            printf("Enter your picCode:- \n");
            scanf("%d",pincode);
        }
        if (gender == 'w' || gender == 'W')
        {
            printf("(Woman) Enter your age here :-  ");
            scanf("%d", &age);
            if (age < 18)
            {
                printf("(Woman) You are %d old that's why you'r not eligible", age);
            }
            else if (age > 70)
            {
                printf("(Woman) you'r not eligible becouse your age is %d ", age);
            }
            else
            {
                printf("(Woman) You are eligible ");
                printf("please coprate us and some details more.\n ");
            }
            printf("Enter your phone number:- \n ");
            scanf("%d",&phone);
            printf("Enter your adharCard No:- \n");
            scanf("%d",adhar);
            printf("Enter your picCode:- \n");
            scanf("%d",pincode);
        }
    }
    else
    {
        printf("You are not eligible.");
    }

    return (0);
}