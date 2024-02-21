#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    int *p = arr;
    printf("enter element : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
    }
    
    printf("elements are : \n");
    for(int i = 0; i < n; i++){
        printf("%d ",*(p+i));
    }
    

}