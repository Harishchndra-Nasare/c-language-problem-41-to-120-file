#include<stdio.h>
void main(){
	int n[7],i;
	printf("Enter the number\n");
	
	for(i=0;i<7;i++){
		scanf("%d",&n[i]);
	}
	for(i=1;i<7;i++){
		printf("%d",n[i-1]*3);
		printf("%d\n",n[i]);
	}
}
