#include<stdio.h>
void main(){
	int arr[6],i;
	printf("Enter the elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(i%2==0){
			printf("%d",i++);
		}
	}
	
}
