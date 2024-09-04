#include<stdio.h>
void main(){
	int arr[4],i,total;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	total=arr[0]+arr[1]+arr[2]+arr[3];
	if(total==17){
		printf("Sum of array is 17");
	}else{
		printf("0");
	}
}
