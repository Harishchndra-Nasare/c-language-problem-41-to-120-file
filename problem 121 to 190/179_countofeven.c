#include<stdio.h>
void main(){
	int count=0,n,i;
	printf("Enter the n terms even numbers\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==0){
			printf("The even number is %d\n",i);
			count=count+i;
		}
	}
	printf("The sum of even number is %d\n",count);
}
