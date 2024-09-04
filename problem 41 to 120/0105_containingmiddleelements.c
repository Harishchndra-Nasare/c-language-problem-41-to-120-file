#include<stdio.h>
void main(){
	int arr1[5]={1,2,3,4,5},arr2[5]={5,6,7,8,9};
	int arr3[6],i;
		arr3[0]=arr1[1];
		arr3[1]=arr1[2];
		arr3[2]=arr1[3];
		arr3[3]=arr2[1];
		arr3[4]=arr2[2];
		arr3[5]=arr2[3];
	for(i=0;i<6;i++){
		printf("%d",arr3[i]);
	}
}
