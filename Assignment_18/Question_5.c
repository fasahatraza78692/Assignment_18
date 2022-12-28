#include<stdio.h>
#include<string.h>
void lowercase(char string[])
{
	int i;
	for(i=0;string[i]!='\0';i++)
      {
      	if(string[i]>='A'&&string[i]<='Z')
      	  string[i]=string[i]+32;
	  }
    printf("%s",string);
}
int main()
{
	char string[50];
	 printf("Enter a string in uppercase\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 printf("String in Lowercase\n");
	 lowercase(string);
 return 0;
}
