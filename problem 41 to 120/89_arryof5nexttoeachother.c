#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==5 && arr[1]==5 || arr[1]==5 && arr[2]==5 || arr[2]==5 && arr[3]==5){
		printf("Two 5s next to each other");
	}else if(arr[0]==5 && arr[1]==6 || arr[1]==5 && arr[2]==6 || arr[2]==5 && arr[3]==6){
		printf("5 and 6 next to each other");
	}else{
		printf("False");
	}
}
