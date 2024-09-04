#include<stdio.h>
void main(){
	int arr1[3],arr2[2],i;
	printf("Enter the arrray element\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<2;i++){
		arr2[0]=arr1[0];
		arr2[1]=arr1[2];
		printf("%d",arr2[i]);
	}
	
}
