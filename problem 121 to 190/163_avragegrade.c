#include<stdio.h>
void main(){
	float percentage;
	printf("Enter the percentage\n");
	scanf("%f",&percentage);
	if(percentage>=90){
		printf("Excellent");
	}else if(percentage>=80){
		printf("Very good");
	}else if(percentage>=60){
		printf("Good");
	}else if(percentage>=35){
		printf("Avrage");
	}else{
		printf("fail");
	}
}
