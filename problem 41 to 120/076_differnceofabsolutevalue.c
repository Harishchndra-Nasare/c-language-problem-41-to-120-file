#include<stdio.h>
void main(){
	int n,abs,value;
	printf("Enter the n number value\n");
	scanf("%d",&n);
	abs=n-51;
	value=abs;
	if(n>51){
		value=value*3;
		printf(" Triple difference of absolute is %d\n",value);
	}else{
		value=value*(-1);
		printf("difference of absolute value is %d",value);
	}
}
