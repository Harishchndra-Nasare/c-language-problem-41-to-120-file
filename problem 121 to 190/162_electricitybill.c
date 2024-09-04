#include<stdio.h>
void main(){
	int id,unit;
	float bill;
	char name[50];
	printf("Enter the id\n");
	scanf("%d",&id);
	printf("Enter the unit\n");
	scanf("%d",&unit);
	printf("Enter the name\n");
	scanf("%s",&name);
	if(unit<=199){
		bill=unit*1.20;
		printf("%f",bill);
	}else if(unit>=200 && unit<=400){
		bill=unit*1.50;
		printf("%f",bill);
	}else if(unit>400 && unit<600){
		bill=unit*1.80;
		printf("%f",bill);
	}else if(unit>600){
		bill=unit*2.00;
		printf("%f",bill);
	}
	if(bill>400){
		bill=bill-(bill*0.15);
		printf("The minimum bill is %f",bill);
	}
}
