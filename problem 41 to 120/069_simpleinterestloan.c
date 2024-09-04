#include<stdio.h>
void main(){
	int si,ri,t,p,days;
	printf("Enter the principle amount\n");
	scanf("%d",&p);
	printf("Enter the rate of interest\n");
	scanf("%d",&ri);
	printf("Enter the days here\n");
	scanf("%d",&days);
	t=days*24;
	si=(p*ri*t)/100;
	printf("simple interset of loan is %d",si);
}
