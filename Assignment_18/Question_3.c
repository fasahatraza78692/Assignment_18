#include<stdio.h>
#include<string.h>
int compare(char string1[],char string2[])
{
	int i,flag=0;
	for(i=0;string1[i]!='\0';i++)
	 	if(string1[i]!=string2[i])
	 	   break;
	if((string1[i]=='\0')&&(string2[i]=='\0'))
	  	return 0;
	else
	  	return 1;
}
int main()
{
	char string1[50],string2[50];
	 printf("Enter 1st string\n");
	 fgets(string1,50,stdin);
	 printf("Enter 2nd string\n");
	 fgets(string2,50,stdin);
	 string1[strlen(string1)-1]='\0';
	 string2[strlen(string2)-1]='\0';
	 if(compare(string1,string2))
	   printf("Not Equal\n");
	 else
	   printf("Both Strings are Equal\n");
 return 0;
}
