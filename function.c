#include <stdio.h>

int addition(int a,int b)  //a=5,b=7
{
    
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}


int main()
{
    
 int choice;                //choice=1
 int num1,num2,ans;         
 printf("Choose a number 1-addition,2-subtraction:\n");
 scanf("%d",&choice);
 
 if(choice==1){
     printf("Enter 2 numbers : ");
     scanf("%d %d",&num1,&num2);  //num1=5   num2=7
     ans= addition(num1,num2);    //addition(5,7);   //ans=12
     printf("%d is the answer",ans);
 }
 
 if(choice==2){
     printf("Enter 2 numbers : ");
     scanf("%d %d",&num1,&num2);
     ans= sub(num1,num2);
     printf("%d is the answer",ans);
 }
 
 
}

