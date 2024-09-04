#include<stdio.h>
void main(){
	int costprice,sellingprice,profit,lost;
	printf("Enter the costprice\n");
	scanf("%d",&costprice);
	printf("Enter the sellingprice\n");
	scanf("%d",&sellingprice);
	if(sellingprice>costprice){
		printf("profit");
	}else{
		printf("loss");
	}
}
