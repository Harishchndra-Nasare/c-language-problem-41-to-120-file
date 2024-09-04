#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[2]==arr[3]){
		printf("True");
	}else{
		printf("False");
	}
}
