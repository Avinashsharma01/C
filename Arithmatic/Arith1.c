#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any number:- ");
    scanf("%d",&a);
    printf("Enter any number:- ");
    scanf("%d",&b);
    a+=10;       // this code is only for understand (a=a+10 or  a+=10)
    b+=10;
    c=a+b;
    printf("This is the total:-  %d\n", c);


    // -=
    int d,e,f;
    printf("Enter any number:- ");
    scanf("%d",&d);
    printf("Enter any number:- ");
    scanf("%d",&e);
    d-+2;
    e-=2;
    f=c+d;
    printf("This is the total:-  %d", e);
    return(0);

    //and so on .......
}