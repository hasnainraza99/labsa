#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter cost price: ");
	scanf("%d",&a);
	printf("enter selling price: ");
	scanf("%d",&b);
	if(a<b)
	{
	  c=b-a;
	  printf("profit is: %d ",c);
    }
	if(a>b)
	{
    c=a-b;
	printf("loss is: %d ",c);
    }
	return 0;
}
