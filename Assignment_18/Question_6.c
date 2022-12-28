#include<stdio.h>
#include<string.h>
int Al_numaric(char string[])
{
	int i;
	for(i=0;string[i]!='\0';i++)
	 {
	 	if((string[i]>='A')&&(string[i]<='Z')||(string[i]>='a')&&(string[i]<='z'))
	 	  if(string[i+1]>='0'&&string[i+1]<='9')
	 	    return 1;
	 }
	 return 0;
}
int main()
{
	char string[50];
	 printf("Enter a string\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 if(Al_numaric(string))
	   printf("Alphanumeric");
	 else
	    printf("Not Alphanumeric");
 return 0;
}
