#include<stdio.h>
void main(){
	int small,medium,large,diff1,diff2;
	printf("Enter the small number\n");
	scanf("%d",&small);
	printf("Enter the medium number\n");
	scanf("%d",&medium);
	printf("Enter the large number\n");
	scanf("%d",&large);
	diff1=small-medium;
	diff2=medium-large;
	if(diff1 == diff2){
		printf("True");
	}else{
		printf("False");
	}
}
