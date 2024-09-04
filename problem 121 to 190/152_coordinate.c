#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the x coordinate\n");
	scanf("%d",&x);
	printf("Enter the y coordinate\n");
	scanf("%d",&y);
	if(x==4 && y==4){
		printf("coordinate point lies");
	}else{
		printf("Coordinate point not lies");
	}
}
