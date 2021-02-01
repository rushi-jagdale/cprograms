#include<stdio.h>  
int main()    
{    
int n,x,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
x=n%10;    
sum=(sum*10)+x;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
