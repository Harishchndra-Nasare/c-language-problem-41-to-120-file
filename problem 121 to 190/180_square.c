#include<stdio.h>
void main(){
	int n,i,squ,count=0;
	printf("Enter the n term of natural number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		squ=i*i;
		printf("The square of number is %d\n",squ);
		count=count+squ;
	}
	printf("The sum of square is %d\n",count);
}
