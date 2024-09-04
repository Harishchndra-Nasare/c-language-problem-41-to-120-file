#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the number x\n");
	scanf("%d",&x);
	printf("Enter the number y\n");
	scanf("%d",&y);
	printf("Enter the number z\n");
	scanf("%d",&z);
	if(z>y>x){
		printf("True");
	}else{
		printf("False");
	}
}
