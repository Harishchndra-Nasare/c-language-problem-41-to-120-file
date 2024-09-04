#include<stdio.h>
void main(){
	int num,i,remi;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		remi=num%10;
		printf("%d",remi);
		num=num/10;
	}
}

