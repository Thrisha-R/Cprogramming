#include <stdio.h>

int main()
{ 
    int a,b;
    for(a=b=10;a;b=b+1)
    {
        a=b<=13;
        
        printf("%d %d\n",a,b);
    }
    
    
    
    printf("%d %d",a+10,b+10);
    
   return 0; 
    
    
}
