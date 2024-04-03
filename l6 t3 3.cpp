#include<stdio.h>
int main(){
	int a,b;
	printf("enter electricity unit: ");
	scanf("%d",&a);

	if(a<=50)
	{
	   b=a*2.5;
	  printf("your bill is: %d ",b);
    }
	if(a>50)
	{
    b=a*5;
	printf("your bill is: %d ",b);
    }
	return 0;
}
