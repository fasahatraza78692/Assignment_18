#include<stdio.h>
#include<string.h>
int palindrom(char string[])
{
	int i=0,j=strlen(string)-1;
	while(i<j)
	{
		if(string[i]!=string[j])
		   return 0;
		 i++;
		 j--;
	}
	return 1;
}
int main()
{
	char string[50];
	 printf("Enter a string\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 if(palindrom(string))
	   printf("Palindrom");
	 else
	   printf("Not Palindrom");
 return 0;
}
