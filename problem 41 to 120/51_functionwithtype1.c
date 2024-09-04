#include<stdio.h>
void series(){
	float i=1,z=4,s=0,n=1,d=1;
	for(i=1;i<=z;i++){
		s=s+n/d;
		n=n+2;
		d=d*2;
	}
	printf("The s value is %f\n",s);
}
void main(){
	series();
}
