#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[i]%5==0 || arr[i]%7==0){
			printf("Array elements contains 5 and 7\n");
		}else{
			printf("Array elements not contains 5 and 7");
		}
}
