#include<stdio.h>
void main(){
	int arr[3],i;
	printf("Enter the array elements\n");
	for(i=0;i<=2;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==5 && arr[1]==5 || arr[1]==5 && arr[2]==5){
		printf("true");
	}else{
		printf("false");
	}
}
