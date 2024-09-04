#include<stdio.h>
void odd(){
	int i=1,n=20;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("The odd number is %d\n",i);
		}
	}
}
void main(){
	odd();
}
