#include<stdio.h>
void main(){
	int arr[3],i;
	printf("Enter the array elements\n");
	for(i=0;i<=2;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==10 && arr[1]==10 || arr[1]==10 && arr[2]==10 
		|| arr[0]==20 && arr[1]==20 || arr[1]==20 && arr[2]==20){
		printf("true");
	}else{
		printf("false");
	}
	
}
