#include<stdio.h>
void main(){
	int num,cube=0,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		cube=(i*i*i);
		printf("the cube of number is %d\n  %d\n",i,cube);
	}
	//
}
