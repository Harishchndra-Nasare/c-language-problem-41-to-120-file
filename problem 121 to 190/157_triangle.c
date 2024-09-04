#include<stdio.h>
void main(){
	int a,b,c,ab,bc,ca;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	ab=a+b;
	bc=b+c;
	ca=c+a;
	if(ab==bc && bc==ca && ab==ca){
		printf("Equilateral triangle");
	}else if(ab==ca && bc!=ab){
		printf("isoscles triangle");
	}else if(ab!=bc && ab!=ca && bc!=ca){
		printf("scalence triangle");
	}
}
