#include<stdio.h>
#include<math.h>

int main(){

    int a;
    int x;
    

    int b = pow(5,4);
    printf("%d \n",b);
    
    printf("enter a number:\n");
    scanf("%d",&x);
    a = x;

    

    int n = 0;
    int sum = 0;
    int rem;
    while(a > 0){
        a = a/10;
        n++;
        //printf("%d \n",n); 
    }
    a = x;

     while(a > 0){
        rem = a % 10;
        printf("%d\n",rem);
        sum  = sum + pow(rem,n);
        printf("%d \n",sum);
        a = a / 10;
     }

    printf("%d \n",sum);

    if(sum == x)
    {
        printf("armStrong");
    } else {
        printf("not armStrong");
    }
return 0;
}