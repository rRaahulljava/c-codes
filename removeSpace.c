#include<stdio.h>

int main(){

    char str[] = {"rahul manya"};
    int a =  sizeof(str);
    printf("%d \n",a);
    for (int i = 0; i < a; i++)
    {
        if(str[i] == ' '){
            continue;
        }
        printf("%c",str[i]);
    }
    
    


return 0;
}