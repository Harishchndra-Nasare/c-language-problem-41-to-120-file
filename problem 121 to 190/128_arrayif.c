#include<stdio.h>
void main(){
	int arr[4],i;
	printf("Enter the array elements\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==3 && arr[1]==5 ||
		arr[1]==3 && arr[2]==5 ||
		arr[2]==3 && arr[3]==5){
			printf("True");
		}else{
			printf("False");
		}
}
