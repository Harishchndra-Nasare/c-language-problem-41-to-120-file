#include<stdio.h>
void series(float x,float y){
	float s=0,n=1,d=1,i;
	for(i=x;i<=y;i++){
		s=s+n/d;
		n=n+2;
		d=d*2;
	}
	printf("the s value is %f",s);
}
void main(){
	int i=1,z=4;
	series(i,z);
}
