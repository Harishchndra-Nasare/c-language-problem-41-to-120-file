#include<stdio.h>
void main(){
	int arr[10],count=0,i;
	printf("Enter the array elements\n");
	for(i=0;i<=9;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[i]==5){
		count++;
	}
	if(count==5){
		printf("True");
	}else{
		printf("False");
	}
}
