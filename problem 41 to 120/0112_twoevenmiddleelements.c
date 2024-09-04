#include<stdio.h>
void main(){
	int arr[5],arr1[2],i;
	printf("Enter the arry elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	arr1[0]=arr[1];
	arr1[1]=arr[3];
	for(i=0;i<2;i++){
		printf("\n%d",arr1[i]);
	}
}
