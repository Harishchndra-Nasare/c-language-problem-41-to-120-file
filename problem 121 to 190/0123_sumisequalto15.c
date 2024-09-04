#include<stdio.h>
void main(){
	int arr[5],i,sum;
	printf("Enter the array elements value\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum=arr[i]++;
	}
	if(sum==15){
		printf("The sum of array of integers is exactly 15\n");
	}else{
		printf("The sum is not equal to 15");
	}
}
