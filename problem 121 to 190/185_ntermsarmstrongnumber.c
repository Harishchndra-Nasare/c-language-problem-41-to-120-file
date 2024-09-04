#include<stdio.h>
void main(){
	int n,count=0,i,rem;
	printf("Enter the n terms number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		rem=i%10;
		count=count+i*i*i;
		n=n/10;
	}
	if(count==i){
		printf("armstrong number");
	}else{
		printf("Not armstrong number");
	}
}
