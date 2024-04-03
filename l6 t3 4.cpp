#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter quantity: ");
	scanf("%d",&a);

	if(a<10)
	{
	  b=99*a;
	  printf("your bill is: %d ",b);
    }
	if(a>=10 && a<=19)
	{
	  b=(99*a)*0.2;
	  printf("your bill is: %d ",b);
    }
	if(a>=20 && a<=49)
	{
	  b=(99*a)*0.3;
	  printf("your bill is: %d ",b);
    }
    if(a>=50 && a<=99)
	{
	  b=(99*a)*0.4;
	  printf("your bill is: %d ",b);
    }
    if(a>=100)
	{
	  b=(99*a)*0.5;
	  printf("your bill is: %d ",b);
    }
	return 0;
}
