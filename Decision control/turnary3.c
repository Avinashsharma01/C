#include <stdio.h>
int main()
{
    char gender;
    printf("Enter your gender here:- ");
    scanf("%c",&gender);
    gender=='m'||'M'? printf("You are man"): printf("You are Woman");
    return (0);
}