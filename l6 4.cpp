#include<stdio.h>
int main(){
	int num1,num2,div;
	printf("enter first number: ");
	scanf("%d",&num1);
    printf("enter second number: ");
	scanf("%d",&num2);
	div=num1/num2;
	if(num1>num2 && num2>0)
	printf("%d",div);
	else
	printf("please enter first number greater then second and second number must not be zero");
	
	return 0;
}
