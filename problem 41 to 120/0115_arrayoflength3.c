#include<stdio.h>
void main(){
	int arr1[8],arr2[3],i;
	printf("Enter the array elements\n");
	for(i=0;i<8;i++){
		scanf("%d",&arr1[i]);
	}
	arr2[0]=arr1[3];
	arr2[1]=arr1[4];
	arr2[2]=arr1[5];
	printf("New array to print\n");
	for(i=0;i<3;i++){
		printf("\n%d",arr2[i]);
	}
}
