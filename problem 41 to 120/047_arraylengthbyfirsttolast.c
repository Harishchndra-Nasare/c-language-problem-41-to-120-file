#include<stdio.h>
void main(){
	int n[6],i,temp;
	printf("Enter the value\n");
	for(i=0;i<6;i++){
		scanf("%d",&n[i]);
	}
	temp = n[0];
	n[0] = n[5];
	n[5] = temp;
	temp = n[1];
	n[1] = n[4];
	n[4] = temp;
	temp = n[2];
	n[2] = n[3];
	n[3] = temp;
	for(i=0;i<6;i++){
		printf("%d\n",n[i]);
	}
}
