#include<stdio.h>
void main(){
	int i;
	char chr;
	for(chr=65;chr<=90;chr++){
		if(chr>90 && chr<97){
			printf("%c",chr);
			continue;
		}
		printf("\n");
	}
}
