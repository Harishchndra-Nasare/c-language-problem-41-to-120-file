#include<stdio.h>
void main(){
	int arr[3],arr1[3],arr2[6],i;
	printf("Enter the array elements\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the array1 elements\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr1[i]);
	}
	arr2[0]=arr[0];
	arr2[1]=arr[1];
	arr2[2]=arr[2];
	arr2[3]=arr1[0];
	arr2[4]=arr1[1];
	arr2[5]=arr1[2];
	printf("New array of elements is\n");
	for(i=0;i<6;i++){
		printf("\n%d",arr2[i]);
	}
}
