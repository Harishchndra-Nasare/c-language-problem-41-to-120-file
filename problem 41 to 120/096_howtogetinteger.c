#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the x value\n");
	scanf("%d",&x);
	printf("Enter the y value\n");
	scanf("%d",&y);
	printf("Enter the z value\n");
	scanf("%d",&z);
	if(x==y && y==z){
		printf("We get the integer");
	}else{
		printf("We not get the integer");
	}
}
