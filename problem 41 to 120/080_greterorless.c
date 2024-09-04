#include<stdio.h>
void main(){
	float temp;
	printf("Enter the tempratue");
	scanf("%d",&temp);
	if(temp<0){
		printf("temp is less than");
	}else if(temp>100){
		printf("temp is grter than");
	}
}
