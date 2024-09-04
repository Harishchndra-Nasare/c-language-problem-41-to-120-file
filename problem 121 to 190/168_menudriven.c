#include<stdio.h>
void main(){
	int choice,circle,triangle,rectangle,trapezoid;
	printf("press 1 for circle\n");
	printf("press 2 for triangle\n");
	printf("press 3 for rectangle\n");
	printf("press 4 for trapezoid\n");
	printf("please enter the choice\n");
	scanf("%d",&choice);
	if(choice==1){
		float pi=3.14,r=12;
		circle=pi*r*r;
		printf("the circle is %d",circle); 
	}else if(choice==2){
		int  b=18 , h=12;
		triangle=(1*b*h)/2;
		printf("the triangle is %d",triangle);
	}else if(choice==3){
		int w=11,l=10;
		rectangle=w*l;
		printf("the rectangle is %d",rectangle);
	}else if(choice==4){
		int a=10,b=12,h=14;
		trapezoid=((a+b)*h)/2;
		printf("the trapezoid is %d",trapezoid);
	}else{
		printf("plese enter valid choice");
	}
}

