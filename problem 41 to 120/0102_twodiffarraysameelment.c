#include<stdio.h>
void main(){
	int arr1[5],arr2[5],i;
	printf("Enter the array1 element\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the array2 element\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	if(arr1[0]==arr2[0] ||arr1[4]==arr2[4]){
		printf("True");
	}else{
		printf("False");
	}
}
