#include<stdio.h>
void main(){
	float i=1,e=4,s=0,n=1,d=1;
	for(i=1;i<=4;i++){
		n=n+2;
		d=d*2;
		s=s+n/d;
		//printf("%f\n",s);
	}
	printf("%f",s);
}
