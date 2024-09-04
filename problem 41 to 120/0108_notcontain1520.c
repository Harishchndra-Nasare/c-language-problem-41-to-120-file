#include<stdio.h>
void main(){
	int arr[2],i;
	printf("Enter the element\n");
	for(i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]!=15 && arr[0]!=20 ||arr[1]!=15 && arr[1]!=20){
		printf("True");
	}else{
		printf("False");
	}
}
