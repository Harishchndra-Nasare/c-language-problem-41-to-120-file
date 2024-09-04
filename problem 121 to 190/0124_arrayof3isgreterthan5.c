#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[2]>arr[5]){
		printf("True");
	}else{
		printf("False");
	}
}
