#include<stdio.h>
void main(){
	int i,num;
	num=i;
	for(i=1;i<200;i++){
		if(i%num==0 || i%1==0){
			printf("%d\n",i);
		}
	}
}
