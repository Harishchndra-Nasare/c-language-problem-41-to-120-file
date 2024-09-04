#include<stdio.h>
void main(){
		int table,num,i;
	printf("Enter the any number\n");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		table=i*num;
		printf("\n%d",table);
	}
}
