#include<stdio.h>
void main(){
	int arr[3],i,total;
	printf("Enter the array elements\n");
	for(i=0;i<=2;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==5 && arr[1]==6 || arr[1]==5 && arr[2]==6){
		total=arr[0]+arr[1]+arr[2];
		printf("sum of total is %d",total);
	}else{
		printf("0");
	}
}
