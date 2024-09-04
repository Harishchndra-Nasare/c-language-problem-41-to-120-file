#include<stdio.h>
void main(){
	int number,i,table;
	printf("Enter the any integer number\n");
	scanf("%d",&number);
	for(i=1;i<=10;i++){
		table=number*i;
		printf("\n%d",table);
	}
}
