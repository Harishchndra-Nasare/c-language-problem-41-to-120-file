#include<stdio.h>
void main(){
	int roll_no,sub1,sub2,sub3,total,per;
	char name[12];
	printf("Enter the roll number\n");
	scanf("%d",&roll_no);
	printf("Enter the name\n");
	scanf("%c",&name);
	printf("Enter the subject1 mark\n");
	scanf("%d",&sub1);
	printf("Enter the subject2 mark\n");
	scanf("%d",&sub2);
	printf("Enter the subject3 mark\n");
	scanf("%d",&sub3);
	total=sub1+sub2+sub3;
	per=(total%3)*100;
	printf("Percntage of  %d \n",per);
	
}
