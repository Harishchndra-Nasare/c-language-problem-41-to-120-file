#include<stdio.h>
void main(){
	char ch;
	printf("Enter the alphabet\n");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("Vowel");
	}else{
		printf("Consonant");
	}
}
