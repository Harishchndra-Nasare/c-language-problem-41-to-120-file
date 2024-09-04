#include<stdio.h>
void main(){
	int math,phy,chem,toinallsub,tomathandsub;
	printf("Enter the marks to check the elagibility of admissiion\n");
	printf("Enter the math marks\n");
	scanf("%d",&math);
	printf("Enter the phy marks\n");
	scanf("%d",&phy);
	printf("Enter the chem marks\n");
	scanf("%d",&chem);
	toinallsub=math+phy+chem;
	tomathandsub=math+phy+chem;
	if(toinallsub>=180 || tomathandsub>=140){
		printf("Student is eligible for admission");
	}else{
		printf("Student is not eligible for admision");
	}
}
