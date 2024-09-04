#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==arr[4]){
		printf("true");
	}else{
		printf("False");
	}
}
