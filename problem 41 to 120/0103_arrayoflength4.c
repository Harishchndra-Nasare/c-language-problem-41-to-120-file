#include<stdio.h>
void main(){
	int arr[4],i,left;
	printf("Enter the array element\n");
	for(i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	left=arr[0];
	for(i=0;i<3;i++){
		arr[i]=arr[i+1];
	}
	arr[3]=left;
	
	for(i=0;i<4;i++){
		printf("%d",arr[i]);
	}
}
