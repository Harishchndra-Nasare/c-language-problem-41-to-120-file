#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
		}
		if(arr[0]==arr[1] && arr[1]==arr[2] || arr[1]==arr[2] && arr[2]==arr[3]){
			printf("triple");
		}else{
			printf("false");
	}	
}
