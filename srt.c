#include <stdio.h>

int print(char string[]){
    int i;
    for(i=0;i<5;i++){
        printf("%c",string[i]);
    }
    return i;
}


int main()
{
   
 int num,a;
 num = print("Hello");
 printf("\n%d",num);
}

