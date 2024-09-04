#include<stdio.h>
void main(){
	int arr1[2],arr2[2],i,swap;
	printf("Enter the array elements\n");
	for(i=0;i<2;i++){
		scanf("%d",&arr1[i]);
	}
	swap=arr1[0];
	arr2[0]=arr1[1];
	arr2[1]=arr1[0];
	for(i=0;i<2;i++){
		printf("\n%d",arr2[i]);
	}
}
