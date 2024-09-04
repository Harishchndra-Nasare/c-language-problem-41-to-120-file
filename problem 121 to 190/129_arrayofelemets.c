#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter the array elemets\n");
	for(i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=3;i++){
		if(arr[i]%2==0 || arr[i]%3==0){
			printf("True");
			break;
		}else{
			printf("False");
			break;
		}
	}
}
