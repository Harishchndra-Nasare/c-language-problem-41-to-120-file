#include<stdio.h>
void main(){
	int number,i,sum=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	for(i=1;i<number;i++){
		if(number%i == 0){
			printf("%d\n",i);
			sum=sum+i;
		}
	}
		if(sum==number){
			printf("perfect number %d\n",number);
		}else{
			printf("Not perfect number %d\n",number);
		}
	
}
