#include<stdio.h>
#include<string.h>
void uppercase(char string[])
{
	int i;
	for(i=0;string[i]!='\0';i++)
      {
      	if(string[i]>='a'&&string[i]<='z')
      	  string[i]=string[i]-32;
	  }
    printf("%s",string);
}
int main()
{
	char string[50];
	 printf("Enter a string in lowercase\n");
	 fgets(string,50,stdin);
	 string[strlen(string)-1]='\0';
	 printf("String in Uppercase\n");
	 uppercase(string);
 return 0;
}
