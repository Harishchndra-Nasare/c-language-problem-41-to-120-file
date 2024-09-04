#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==1 && arr[1]==2 && arr[2]==3 || arr[1]==1 && arr[2]==2 && arr[3]==3){
		printf("Its in the sequnce");
	}else{
		printf("Not in the sequnce");
	}
}
