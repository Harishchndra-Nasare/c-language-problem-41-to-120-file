#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the number x");
	scanf("%d",&x);
	printf("Enter the number y");
	scanf("%d",&y);
	 x=x+y;
	 y=x-y;
	 x=x-y;	
	 printf("%d %d",x,y);
	}
	
