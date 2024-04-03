#include<stdio.h>
int main(){
	int i, num, a;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1; i<=num; i++){
		a=a*i;
	}
	printf("factorial= %d",a);
	return 0;
}
