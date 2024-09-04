#include<stdio.h>
void main(){
	int n,num=1,i,sum=0;
	printf("Enter the number\n");
	printf("Enter the n terms of number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(num%i==0){
			sum+=i;
			num++;
		}
	}
		if(sum==num){
			printf("Perfect number %d\n",num);
		}else{
			printf("Not perfect number %d\n",num);
		}
}
