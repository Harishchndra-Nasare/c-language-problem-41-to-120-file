#include<stdio.h>
void main(){
	int height;
	printf("Enter the person height in cm\n");
	scanf("%d",&height);
	if(height<=150){
		printf("person is small in height");
	}else if(height<=165){
		printf("Person is medium in height");
	}else{
		printf("Pesron is high in height");
	}
}
