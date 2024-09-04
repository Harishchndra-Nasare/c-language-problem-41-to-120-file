#include<stdio.h>
void main(){
	int n[5],i;
	printf("Enter the number\n");
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){
		if(n[i]<5){
		printf("%d",n[i]);
		}
	}
}
