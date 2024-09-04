#include<stdio.h>
void odd(int x,int y){
	int i;
	for(i=x;i<=y;i++){
		if(i%2!=0){
			printf("The odd number is %d\n",i);
		}
	}
}
void main(){
	int i=1,n=20;
	
	odd(i,n);
}
