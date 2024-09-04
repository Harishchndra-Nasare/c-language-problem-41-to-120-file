#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("The odd number is %d\n",i);
			count=count+i;
			//printf("%d",count);
		}
	}
	printf("The sum odd number is %d\n",count);
}
