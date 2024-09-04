#include<stdio.h>
void main(){
	int arr1[3],arr2[3],sum1,sum2,i;
	printf("Enter the array elements\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr1[i]);
		sum1=arr1[0]+arr1[1]+arr1[2];
	}
	printf("Enter the array elements\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr2[i]);
		sum2=arr2[0]+arr2[1]+arr2[2];
	}
	if(sum1>sum2){
		printf("Array 1 is largest sum %d\n",sum1);
	}else{
		printf("Array of 2 is largest sum %d",sum2);
	}
	
	
}
