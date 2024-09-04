#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==15 && arr[1]==15 ||
		arr[1]==15 && arr[2]==15 ||
		arr[2]==15 && arr[3]==15){
			printf("true");
		}else{
			printf("false");
		}
}
