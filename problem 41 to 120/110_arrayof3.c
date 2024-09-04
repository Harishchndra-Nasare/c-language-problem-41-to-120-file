#include<stdio.h>
void main(){
	int arr[3],i;
	printf("Enter the array elements\n");
	for(i=0;i<=2;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=2;i++){
	if(arr[0]==5 && arr[1]==7 || arr[1]==5 && arr[2]==7){
			printf("%d",arr[i]);
		}
	}
}
