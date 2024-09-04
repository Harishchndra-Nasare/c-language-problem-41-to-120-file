#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<=5;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]<arr[1]<arr[2]<arr[3]<arr[4]){
		printf("True");
	}else{
		printf("False");
	}
}
