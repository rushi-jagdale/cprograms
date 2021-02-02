#include<stdio.h>
void add(int ,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

int main()
{
	int a,b,ch;
printf("\n 1.for addition \n 2.for substraction \n 3.for multiplication  \n 4.for division \n");
scanf("%d",&ch);
if(ch<=4){
printf("\n Enter a two integer numbers\n");
scanf("%d%d",&a,&b);
}
switch(ch)
{
case 1:
	add(a,b);
        break;
case 2: 
	sub(a,b);
        break;
case 3: 
	mul(a,b);
       break;
case 4:
       div(a,b);
       break;
default:
       printf("\t please enter valid number\n");
}
}
void add(int x,int y)
{
	int z;
	z=x+y;
	printf("\n The addition = %d",z);
}
void sub(int x,int y)
{
        int z;
        z=x-y;
        printf("\n The substraction = %d",z);
}
void mul(int x,int y)
{
        int z;
        z=x*y;
        printf("\n The multiplication = %d",z);
}
void div(int x,int y)
{
        int z;
        z=x/y;
        printf("\n The division = %d \n",z);
}


