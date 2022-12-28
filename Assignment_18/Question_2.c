#include<stdio.h>
#include<string.h>
char* reverse(char string[])
{
	int i,j;
	char t;
	for(i=0,j=strlen(string)-1;i<j;i++,j--)
	 {
	 	t=string[i];
	 	string[i]=string[j];
	 	string[j]=t;
	 }
	return string;
	 
}
int main()
{
	char string[50];
	 printf("Enter a string\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 printf("%s",reverse(string));
 return 0;
}
