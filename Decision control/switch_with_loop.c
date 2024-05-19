#include <stdio.h>
int main()
{
    int day, i;
    printf("Enter any number to start the loop:- ");
    scanf("%d", &i);
    while (i++)
    {
        printf("Enter day here (1/7):- ");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("%d)Sunday\n",day);
            break;
        case 2:
            printf("%d)Monday\n",day);
            break;
        case 3:
            printf("%d)Tuesday\n",day);
            break;
        case 4:
            printf("%d)Wednesday\n",day);
            break;
        case 5:
            printf("%d)Thursday\n",day);
            break;
        case 6:
            printf("%d)Friday\n",day);
            break;
        case 7:
            printf("%d)Saturday\n",day);
            break;
        default:
            printf("You have typed wrong day\n");
        }
    }
    return (0);
}