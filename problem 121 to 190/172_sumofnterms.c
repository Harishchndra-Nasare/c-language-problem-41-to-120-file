#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter the n term of natrual number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n%d",i);
		count=count+i;
	}
	printf("The sum nterms of natural number is %d\n",count);
}
