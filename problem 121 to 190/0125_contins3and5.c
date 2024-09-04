#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[i]%3==0 || arr[i]%5==0){
		printf("Array contains the 3 and 5\n");
	}else{
		printf("Array not contains the 3 and 5");
	}
}
