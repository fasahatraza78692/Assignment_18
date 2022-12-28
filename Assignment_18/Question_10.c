#include<stdio.h>
#include<string.h>
void repeated(char string[])
{
	int i,c,hash[123]={0};
	for(i=0;string[i]!='\0';i++)
	     hash[string[i]]++;
	printf("Repeated Characters...\n");
	for(i=0;i<123;i++)
	  	if(hash[i]>=2)
		  printf("%c ",i);
}
int main()
{
	char string[50];
	 printf("Enter a string\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 repeated(string);
 return 0;
}
