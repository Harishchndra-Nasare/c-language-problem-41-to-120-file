#include<stdio.h>
void main(){
	int arr[5],num,i;
	printf("Enter the array of elements\n");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	num=arr[0];
	arr[0]=arr[1];
	arr[1]=arr[2];
	arr[2]=arr[3];
	arr[3]=arr[4];
	arr[4]=num;
	for(i=0;i<=4;i++){
		printf("%d",arr[i]);
	}
}
