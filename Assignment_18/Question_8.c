#include<stdio.h>
#include<string.h>
int count(char string[])
{
	int i,c=0;
	for(i=0;string[i]!='\0';i++)
	 {
	 	if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z'))
	 	 {
	 	 	if(string[i+1]==' '||string[i+1]=='\0')
	 	 	   c++;
		 }
	 }
	 return c;
}
int main()
{
	char string[100];
	 printf("Enter a string\n");
	 fgets(string,100,stdin);
	 string[strlen(string)-1]='\0';
	 printf("Words = %d",count(string));
 return 0;
}
