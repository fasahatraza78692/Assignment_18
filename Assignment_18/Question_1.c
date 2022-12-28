#include<stdio.h>
#include<string.h>
int length(char string[])
{
	int i,l=0;
	for(i=0;string[i]!='\0';i++)
		 l++;
	return l;
}
int main()
{
	char string[50];
	 printf("Enter a string\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	printf("length = %d",length(string));
	return 0;
}
