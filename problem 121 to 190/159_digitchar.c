#include<stdio.h>
void main(){
	char ch;
	printf("Enter the any character\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='z'){
		printf("Alphabet");
	}else if(ch>='0' && ch<='9'){
		printf("Digit");
	}else{
		printf("Special Symbol");
	}
}
