#include<stdio.h>
void main(){
	int number,table,n,i;
	printf("Enter the number\n");
	scanf("%d",&number);
	printf("Enter the n term of number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		table=number*i;
		printf("%d ",table);
	}
}
