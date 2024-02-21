#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int sum = 0;

    int a = sizeof(arr) / sizeof(arr[0]);
    printf("enter the  number \n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        printf("%d \n",arr[i]);
       sum = sum + arr[i];
    }
    
    // int x = 10;
    // int* ptr = &x;
    int* p = arr;
    printf("%d",sum);

    

return 0;
}