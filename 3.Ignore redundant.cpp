#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],new_string[100];
	printf("Enter string : ");
	gets(string);
	int n = strlen(string),newl=0;
	int i;
	for(i=0;i<=n;i++){
		if((string[i]!=' ') && (string[i]!='\t') &&(string[i]!='/' && (string[i]!='*'))){
			new_string[newl] = string[i];
			newl++;
		}
	}
	for(i=0;i<newl;i++){
		printf("%c", new_string[i]);
	}
