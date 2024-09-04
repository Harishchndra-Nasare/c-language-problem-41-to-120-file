#include<stdio.h>
void main(){
	int n[7],i;
	printf("enter the number\n");
	
	for(i=0;i<7;i++){
		scanf("%d",&n[i]);
		if(n[i]<0||n[i]==0){
			n[i]=100;
		}
	}
	for(i=0;i<7;i++){
		printf("%d\n",n[i]);
	}
	
}
