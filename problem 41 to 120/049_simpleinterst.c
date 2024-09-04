#include<stdio.h>
void main(){
	int si,p,ri,t;
	printf("Enter the principle value\n");
	scanf("%d",&p);
	printf("Enter the rate of interset value\n");
	scanf("%d",&ri);
	printf("Enter the time value\n");
	scanf("%d",&t);
	si=p*ri*t/100;
	printf("simple interst is=%d",si);
}
