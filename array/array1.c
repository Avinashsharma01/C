#include <stdio.h>
int main()
{
    int length,arr[]={1,2,3,4,5,6,7,8,9,10};
    length = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",length);  // for check the length of array 
    for(int i=0; i<=length; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for(int i=0; i<=length; i++){
        arr[i]*=2;
        printf("%d\t",arr[i]);
    }
    return (0);
}