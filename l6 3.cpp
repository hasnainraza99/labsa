#include<stdio.h>
int main(){
	int num;
	printf("enter a number between 1 to 7: ");
	scanf("%d",&num);
	if(num==1)
	printf("sunday");
	if(num==2)
	printf("monday");
	if(num==3)
	printf("tuesday");
	if(num==4)
	printf("wednesday");
	if(num==5)
	printf("thursday");
	if(num==6)
	printf("friday");
	if(num==7)
	printf("saturday");
	if(num>=8)
	printf("please enter correct number");
	return 0;

}
