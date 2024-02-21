#include<stdio.h>
int main(){
    int num;
    int rem;
    printf("enter the value of num: ");
    scanf("%d",&num);
    int Rnum = 0;
    while(num != 0 ){
        rem = num % 10;
        num = num / 10;
        Rnum = Rnum * 10 + rem;
    }

    printf("reverse num is %d",Rnum);
    return 0;

}

