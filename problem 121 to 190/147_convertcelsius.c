#include<stdio.h>
void main(){
	float celsius,faherenhit,kelvin;
	printf("Enter the temp in ceslius\n");
	scanf("%f",&celsius);
	faherenhit=(9/5*celsius);
	kelvin=celsius+273.15;
	printf("the temprature in faherenhit %f\n",faherenhit);
	printf("The temprature in kelvin %f",kelvin);
}
