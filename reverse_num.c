#include<stdio.h>


int main() {

    int num , remainder ;
    int re_num = 0;
    printf("Enter the number\n");
    scanf("%d" ,  &num);
    printf("The number is %d\n" , num);
    while(num!=0) {
        remainder = num % 10;
        num = num/10;
        re_num = re_num*10 + remainder; 
    }
    printf("Reverse is %d\n" , re_num);
    printf("hello world");

    return 0;
}